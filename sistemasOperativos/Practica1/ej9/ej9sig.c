#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("SYNTAX ERROR: La sintaxis del programa deberia ser ./ej9sig <pidProceso>");
        exit(EXIT_FAILURE);
    }

    kill (atoi(argv[1]), SIGUSR1);
    sleep(1);
    kill (atoi(argv[1]), SIGKILL);
}