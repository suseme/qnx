/*
 * Demonstrate how to set up a timer that, on expiry, 
 * sends us a pulse.  This example sets the first 
 * expiry to 1.5 seconds and the repetition interval 
 * to 1.5 seconds.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <sys/netmgr.h>
#include <sys/neutrino.h>

#define MY_PULSE_CODE   _PULSE_CODE_MINAVAIL

typedef union {
        struct _pulse   pulse;
        /* your other message structures would go 
           here too */
} my_message_t;

int main()
{
   struct sigevent         event;
   struct itimerspec       itime;
   timer_t                 timer_id;
   int                     chid;
   int                     rcvid;
   my_message_t            msg;
   struct sched_param      scheduling_params;
   int prio;

   chid = ChannelCreate(0);
 
  /* Get our priority. */
    if (SchedGet( 0, 0, &scheduling_params) != -1)
    {
       prio = scheduling_params.sched_priority;
    }
    else
    {
       prio = 10;
    }
 
   event.sigev_notify = SIGEV_PULSE;
   event.sigev_coid = ConnectAttach(ND_LOCAL_NODE, 0, 
                                    chid, 
                                    _NTO_SIDE_CHANNEL, 0);
   event.sigev_priority = prio;
   event.sigev_code = MY_PULSE_CODE;
   timer_create(CLOCK_MONOTONIC, &event, &timer_id);

   itime.it_value.tv_sec = 1;
   /* 500 million nsecs = .5 secs */
   itime.it_value.tv_nsec = 500000000; 
   itime.it_interval.tv_sec = 1;
   /* 500 million nsecs = .5 secs */
   itime.it_interval.tv_nsec = 500000000; 
   timer_settime(timer_id, 0, &itime, NULL);

   /*
    * As of the timer_settime(), we will receive our pulse 
    * in 1.5 seconds (the itime.it_value) and every 1.5 
    * seconds thereafter (the itime.it_interval)
    */

   for (;;) {
       rcvid = MsgReceive(chid, &msg, sizeof(msg), NULL);
       if (rcvid == 0) { /* we got a pulse */
            if (msg.pulse.code == MY_PULSE_CODE) {
                printf("we got a pulse from our timer\n");
            } /* else other pulses ... */
       } /* else other messages ... */

       timespec rqtp;
       rqtp.tv_sec = 5;
       rqtp.tv_nsec = 0;

       nanosleep( &rqtp, NULL );

       int overrun = timer_getoverrun( timer_id );
       printf("the overrun = %d\n", overrun);
   }
   return(EXIT_SUCCESS);
}