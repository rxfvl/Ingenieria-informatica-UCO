#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int par = 0;
int impar = 0;
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

void *suma(void* entrada)
{
    int* indice = (int*)entrada;
    int val;
    for (int i = 0; i<5; i++)
    {
        val = rand() % 11;
        pthread_mutex_lock(&mtx);
        if ((*indice % 2) == 0)
        {
            printf("-> Hebra %lu sumando %d a PAR\n", pthread_self(), val);
            par += val;
        }

        else
        {
            printf("-> Hebra %lu sumando %d a IMPAR\n", pthread_self(), val);
            impar += val;
        }
        pthread_mutex_unlock(&mtx);
    }
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("SYNTAX ERROR: Se espera ./ej2 <nHilos>\n");
        exit(EXIT_FAILURE);
    }

    int nHilos = atoi(argv[1]);
    pthread_t hebras[nHilos];
    srand(time(NULL));

    for (int i = 0; i<nHilos; i++)
    {
        if (pthread_create(&hebras[i], NULL, suma, (void*)&i))
        {
            fprintf(stderr, "pthread_create() error\n");
            exit(EXIT_FAILURE);
        }
    }

    printf("MAIN ESPERANDO HEBRAS\n");

    for (int i = 0; i<nHilos; i++)
    {
        if (pthread_join(hebras[i], NULL))
        {
            fprintf(stderr, "pthread_join() error\n");
            exit(EXIT_FAILURE);
        }
    }
    printf("--- VALORES FINALES ---\nPAR = %d\nIMPAR = %d\n", par, impar);
}