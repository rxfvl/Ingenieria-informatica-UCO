#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>

struct mystruct
{
    pthread_mutex_t *m;
    int *global;
};

void* h1(void* entry)
{
    struct mystruct *s = (struct mystruct*)entry;
    pthread_mutex_t semaforo = *s->m;
    int *glob = s->global;

    pthread_mutex_lock(&semaforo);
    (*glob)++;
    pthread_mutex_unlock(&semaforo);

    pthread_exit(NULL);
}


int main()
{
    
    pthread_mutex_t sem = PTHREAD_MUTEX_INITIALIZER; // PONER * EN EL SEMAFORO --> pthread_mutex_t *sem;
    int global = 0;
    pthread_t hebras[2];
    struct mystruct ms[2];

    for (int i = 0; i<2; i++)
    {
        ms[i].m = &sem;
        ms[i].global = &global;

        pthread_create(&hebras[i], NULL, h1, (void*) ms);
    }

    for(int i=0; i<2; i++)
    {
        pthread_join(hebras[i], NULL);
    }

    printf("Global = %d\n", global);
}
