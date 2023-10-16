#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
//#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("SYNTAX ERROR: El formato debe ser ./ej2 <nhijos>\n");
        exit(EXIT_FAILURE);
    }


    pid_t childpid, pid;
    int status;
    int nhijos = atoi(argv[1]);


    for(int i=0; i<nhijos; i++) {
        pid = fork();
        switch(pid)
        {
            case -1:
                perror("Fork() error\n");
                printf("Errno value = %d", errno);
                exit(EXIT_FAILURE);

            case 0:
                printf("Soy el hijo %d, del padre %d\n", getpid(), getppid());
                break;

            default:

                childpid = wait(&status);

                if(childpid > 0)
                {
                    if (WIFEXITED(status))
                    {
                        printf("Padre %d. Hijo %d recogido, status value = %d\n", getpid(), childpid, WEXITSTATUS(status));
                        exit(EXIT_SUCCESS);
                    }
                    else if (WIFSIGNALED(status))
                    {
                        printf("Padre %d. Hijo %d matado por señal %d\n", getpid(), childpid, WTERMSIG(status));
                        exit(EXIT_SUCCESS);
                    }

                    else
                    {
                        printf("Error en la invocacion a wait\n");
                        exit(EXIT_FAILURE);
                    }
                }

        }
    }  

}