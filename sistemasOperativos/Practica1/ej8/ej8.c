#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/wait.h>
#include <string.h>


void tratarSennal(int signal)
{
    printf("Hijo: %d. Me ha llegado una señal %d, definida como %s\n", getpid(), signal, strsignal(signal));
}

int main()
{
    pid_t pid, childpid;
    int status, j;

    if ((signal(SIGUSR1, tratarSennal)) == SIG_ERR)
        {
            perror("Signal error\n");
            printf("Errno value = %d\n", errno);
            exit (EXIT_FAILURE);
        }

    pid = fork();

    if (pid == -1)
    {
        perror("Fork() error\n");
        printf("Errno value = %d\n", errno);
        exit(EXIT_FAILURE);
    }

    else if (pid == 0)
    {
        printf("Soy el hijo con pid %d. Pasando a estado bloqueado...\n", getpid());
        
        while(1){
            pause();
        }

    }

    else
    {
        sleep(1);
        printf("Soy el padre con pid %d, mandando señales a hijo...\n", getpid());
        while (1)
        {
            kill (pid, SIGUSR1);
            j++;
            printf("Señal %d mandada\n", j);
            sleep(1);

            if (j == 5)
            {
                kill (pid, SIGKILL);
                break;
            }
        }
        childpid = wait(&status);

        if (childpid > 0)
        {
            if (WIFEXITED(status) != 0)
            {
                printf("Padre: %d. Hijo %d recogido con exito. Status = %d\n", getpid(), childpid, WEXITSTATUS(status));
                exit (EXIT_SUCCESS);
            }

            else if (WIFSIGNALED(status) != 0)
            {
                printf("Padre: %d. Hijo %d matado por una señal %d, definida como %s\n", getpid(), childpid, WTERMSIG(status), strsignal (WTERMSIG(status)));
                exit (EXIT_SUCCESS);
            }
        }
    }
}