#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

int global = 0;
//pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

void *incrementa()
{
    //pthread_mutex_lock(&mtx);
    for(int i=0; i<1000000; i++) {
        global++;
    }
    //pthread_mutex_unlock(&mtx);
    printf("%d\n", global);
    pthread_exit(NULL);
}

int main()
{
    pthread_t hebras[2];
    for(int i = 0; i<2; i++) {
        if (pthread_create(&hebras[i], NULL, incrementa, NULL))
        {
            perror("pthread_create() error\n");
            printf("Errno value = %d\n", errno);
            exit(EXIT_FAILURE);
        }
    }
    for(int i = 0; i<2; i++) {
        if(pthread_join(hebras[i], NULL))
        {
            perror("pthread_join() error\n");
            printf("Errno value = %d\n", errno);
            exit(EXIT_FAILURE);
        }
    }
    printf("GLOBAL: %d\n", global);
}