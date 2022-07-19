/*
 * This program prints out the clock resolution.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
  {
    struct timespec res;

    if ( clock_getres( CLOCK_REALTIME, &res) == -1 ) {
      perror( "clock get resolution" );
      return EXIT_FAILURE;
    }
    printf( "CLOCK_REALTIME Resolution is %ld micro seconds.\n",
          res.tv_nsec / 1000 );


    if ( clock_getres( CLOCK_SOFTTIME, &res) == -1 ) {
      perror( "clock get resolution" );
      return EXIT_FAILURE;
    }
    printf( "CLOCK_SOFTTIME Resolution is %ld micro seconds.\n",
          res.tv_nsec / 1000 );

    if ( clock_getres( CLOCK_MONOTONIC, &res) == -1 ) {
      perror( "clock get resolution" );
      return EXIT_FAILURE;
    }
    printf( "CLOCK_MONOTONIC Resolution is %ld micro seconds.\n",
          res.tv_nsec / 1000 );

    return EXIT_SUCCESS;
  }