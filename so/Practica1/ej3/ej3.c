#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h> // STRERROR



int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("SYNTAX ERROR: La sintaxis para ejecutar el programa es: ./ej3 <nhijos>\n");
        exit(EXIT_FAILURE);
    }

    int N = atoi(argv[1]);

    pid_t hijo_pid, childpid;
    int status;

    for(int i = 1; i<N+1; i++){
        hijo_pid = fork();


        if (hijo_pid == 0)
        {
            printf("Soy el hijo %d, con pid %d, del padre con pid %d\n", i, getpid(), getppid());
            sleep(i*5);
            exit(EXIT_SUCCESS);
        }
        else if(hijo_pid == -1)
        {
            perror("Fork Error\n");
            printf("errno value %d\n", errno);
            exit(EXIT_FAILURE);
        }


    }

    while((childpid = wait(&status)) > 0)
    {
        printf("Soy el padre, con pid %d\n", getpid());
        

        if(WIFEXITED(status) != 0)
        {
            printf("Hijo %d recogido, status = %d\n", childpid, WEXITSTATUS(status));
        }
        else if(WIFSIGNALED(status) != 0)
        {
            printf("Hijo %d matado por una señal, status = %d\n", childpid, WTERMSIG(status));
        }            
    }

    if (childpid == (pid_t)-1 && errno == ECHILD)
    {
        printf("Proceso padre %d. No hay mas hijos que esperar. Valor de errno = %d, definido como %s\n", getpid(), errno, strerror(errno));
        exit(EXIT_SUCCESS);
    }
    else
    {
        printf("Error en wait. Valor de errno = %d, definido como %s\n", errno, strerror(errno));
        exit(EXIT_FAILURE);
    }
        
        
    
    // return 0;

}