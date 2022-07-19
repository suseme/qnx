/*
 * This program pauses until a signal other than
 * a SIGINT occurs. In this case a SIGALRM.
 */
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

sigset_t    set;

int main( void )
{
    sigemptyset( &set );
    sigaddset( &set, SIGINT );

    printf( "Program suspended and immune to breaks.\n" );
    printf( "A SIGALRM will terminate the program"
        " in 10 seconds.\n" );
    alarm( 10 );
    printf("alarm 10s\n");
    sigsuspend( &set );
    printf("got SIGINT\n");
    return( EXIT_SUCCESS );
}
