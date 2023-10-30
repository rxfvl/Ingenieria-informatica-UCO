#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <errno.h>

void *suma()
{
    float *n1, *n2, *suma;
    n1 = malloc(sizeof(float));
    n2 = malloc(sizeof(float));
    suma = malloc(sizeof(float));

    *n1 = drand48() * (3-0) + 0;
    *n2 = drand48() * (3-0) + 0;
    printf("Hebra %lu: n1 = %f, n2 = %f\n", pthread_self(), *n1, * n2);
    *suma = *n1 + *n2;
    printf("Suma = %f\n", *n1+*n2);
    

    pthread_exit((void*)suma);
}


int main()
{
    srand48(time(NULL));
    int nHebras = 10;
    float *n, total;
    pthread_t* hebras = malloc(nHebras*sizeof(pthread_t));

    for (int i=0; i<nHebras; i++) {
        if ((pthread_create((hebras+i), NULL, suma, NULL)))
        {
            perror ("Pthread_create() error\n");
            printf("Errno value = %d\n", errno);
            exit(EXIT_FAILURE);
        }
    }

    for (int i=0; i<nHebras; i++) {
        if ((pthread_join(hebras[i], (void**) &n)))
        {
            perror("Pthread_join() error\n");
            printf("Errno value = %d\n", errno);
            exit(EXIT_FAILURE);
        }

        total += *n;
    }
    printf("-----------------------------------\n");
    printf("TOTAL = %f\n", total);
}
