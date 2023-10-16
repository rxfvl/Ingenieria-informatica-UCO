#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>



int main(int argc, char* argv[])
{

    pid_t pid, childpid;
    int status;

    for(int i=0; i<2; i++)
    {
        pid = fork();

        if (pid == 0 && i == 0)
        {
            printf("Soy el hijo %d, con pid %d, del padre %d\n", i+1, getpid(), getppid());
            printf("Abriendo Calculadora...\n");
            if (execlp("gnome-calculator", "gnome-calculator", NULL) == -1)
            {
                perror("exe\n");
                printf("Errno value = %d\n", errno);
                exit(EXIT_FAILURE);
            }
        }
        else if (pid == 0 && i == 1)
        {
            printf("Soy el hijo %d, con pid %d, del padre %d\n", i+1, getpid(), getppid());
            printf("Abriendo GEdit...\n");

            if (execvp("gedit", &argv[0]) < 0 )
            {
                perror("exe\n");
                printf("Errno value = %d\n", errno);
                exit(EXIT_FAILURE); 
            }
        }
    }

    while((childpid = wait(&status)) > 0)
    {
        //if (childpid > 0)
        
            if (WIFEXITED(status))
            {
                printf("Padre %d, hijo %d recogido. Status value = %d\n", getpid(), childpid, WEXITSTATUS(status));
            }
            else if (WIFSIGNALED(status))
            {
                printf("Padre %d. Hijo con pid %d matado por la señal %d\n", getpid(), childpid, WTERMSIG(status));
            }
            else
            {
                printf("Error en la invocacion de wait()\n");
                exit(EXIT_FAILURE);
            }


        //}
        

    }

    if (childpid == (pid_t)-1 && errno == ECHILD)
    {
        printf("No mas hijos que recoger. Valor de errno = %d\n", errno);
        exit(EXIT_SUCCESS);
    }
}