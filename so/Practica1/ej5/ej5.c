#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>


int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("SYNTAX ERROR: La sintaxis del programa debe ser: ./ej5 <n1> <n2>\n");
        exit(EXIT_FAILURE);
    }

    pid_t pid, childpid;
    int status;

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    for (int i = 0; i<2; i++)
    {
        pid = fork();

        if (pid == -1)
        {
            perror("fork() error\n");
            printf("Errno value = %d\n", errno);
            exit(EXIT_FAILURE);
        }

        else if (pid == 0 && i == 0)
        {
            printf("Soy el hijo %d, con pid: %d, del padre con pid %d\n", i+1, getpid(), getppid());

            printf("Calculando el factorial de %d...\n", n1);
            if ( (execl("/home/rafa/Escritorio/so/Practica1/ej5/factorial", "factorial", argv[1], NULL)) < 0 )
            {
                perror("Exe error\n");
                printf("Errno value = %d \n", errno);
                exit(EXIT_FAILURE);
            }
        }

        else if (pid == 0 && i == 1)
        {
            printf("Soy el hijo %d, con pid: %d, del padre con pid %d\n", i+1, getpid(), getppid());

            printf("Calculando el factorial de %d...\n", n2);
            if ( (execl("/home/rafa/Escritorio/so/Practica1/ej5/factorial", "factorial", argv[2], NULL)) < 0 )
            {
                perror("Exe error\n");
                printf("Errno value = %d \n", errno);
                exit(EXIT_FAILURE);
            }
        }
    }

    while((childpid = wait(&status)) > 0)
    {
        if (WIFEXITED(status))
        {
            printf("Padre: %d. Hijo con pid %d recogido con exito. Status = %d\n", getpid(), childpid, WEXITSTATUS(status));
        }

        else if (WIFSIGNALED(status))
        {
            printf("Padre: %d. Hijo con pid %d matado por señal %d", getpid(), childpid, WTERMSIG(status));
        }

        else
        {
            printf("Error en la invocacion de wait()\n");
            exit(EXIT_FAILURE);
        }
        
    }
    
    if (childpid == (pid_t)-1 && errno == ECHILD)
    {
        printf("No hay mas hijos por recoger. Valor de errno = %d. Definido como %s\n", errno, strerror(errno));
        exit(EXIT_SUCCESS);
    }
}