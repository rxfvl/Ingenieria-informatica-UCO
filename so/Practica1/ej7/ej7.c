#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

void sig()
{
    printf("RING\n");
    //return;
}

unsigned int f1(int secs)
{
    alarm(secs);
    pause();
}

int main()
{

    int i=0;

    if ((signal(SIGALRM, sig)) == SIG_ERR)
    {
        perror("Signal error\n");
        printf("Errno value = %d\n", errno);
        exit (EXIT_FAILURE);
    }

    f1(5);
    printf("Han pasado 5 segundos\n");
    f1(3);
    printf("Han pasado 3 segundos\n");
    f1(1);
    printf("Ha pasado 1 segundo, entrando en bucle...\n");

    while (1)
    {
        if (i != 4)
        {
            f1(1);
            i++;
        }
        else
        {
            kill(getpid(), SIGKILL);
        }
    }


}