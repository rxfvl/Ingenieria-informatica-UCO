#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void senial(int signal)
{
    printf("%d\n", getpid());
}

int main()
{
    signal(SIGUSR1, senial);
    while(1){}
}