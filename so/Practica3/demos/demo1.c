#include <pthread.h> 
#include <stdlib.h> 
#include <stdio.h>

/*
Modifique el programa de forma que la creación de hebras se haga mediante un bucle for(),
asi como su espera join() con otro bucle for()
*/

int glob = 0; //GLOBAL VARIABLE
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER; //MUTEX YA INICIALIZADO A 1

void * threadFunc(void *arg) /* Loop 'arg' times incrementing 'glob' */ 
{
    int loops = *((int *) arg); 
    int loc, j, s;
    
    /*******  ¿Que ocurriria si ponemos pthread_mutex_lock() antes del for
    y pthread_mutex_unlock() despues del for?  **********/

    // ANS = Primero incrementaria una de las hebras hasta acabar y despues la otra
    
    for (j = 0; j < loops; j++) 
    {
        /*Lock the mutex*/
        s = pthread_mutex_lock(&mtx); 
        if (s != 0) /*Minimo control de errores*/
        {
            printf("Mutex_lock error...\n");
            //Si salimos aqui con exit(EXIT_FAILURE); el proceso entero termina
            pthread_exit(NULL);
        }
           
        
        /*Critical Section */
        glob++;
        /*Critical Section */
        
        printf("Thread %lu increasing the global variable...\n", (unsigned long) pthread_self()); 
		/*Unlock the mutex*/
		s = pthread_mutex_unlock(&mtx); 
        if (s != 0) /*Minimo control de errores*/
        {
            printf("Mutex_unlock error...\n");
            //Si salimos aqui con exit(EXIT_FAILURE); el proceso entero termina
            pthread_exit(NULL);
        } 
    }
    
    pthread_exit(NULL); 
}

int main(int argc, char *argv[]) 
{
    pthread_t t1, t2; 
    int loops, s;
    
    if(argc!=2) 
	 {
        printf("Ussage: ./a.out Number_of_loops\n");
        exit(EXIT_FAILURE); 
    }
    
    loops = atoi(argv[1]);
    
    s = pthread_create(&t1, NULL, threadFunc, &loops); 
    if (s != 0) /*Minimo control de errores*/
    {
        printf("pthread_create error...\n");
        exit(EXIT_FAILURE);
    } 

    s = pthread_create(&t2, NULL, threadFunc, &loops); 
    if (s != 0) /*Minimo control de errores*/
    {
        printf("pthread_create error...\n");
        exit(EXIT_FAILURE);
    } 
    
    printf("MAIN Thread, arriving to the join call...\n"); 

    s = pthread_join(t1, NULL);
    if (s != 0) /*Minimo control de errores*/
    {
        printf("pthread_join error...\n"); 
        exit(EXIT_FAILURE);
    }    

    s = pthread_join(t2, NULL);
    if (s != 0) /*Minimo control de errores*/
    {
        printf("pthread_join error...\n"); 
        exit(EXIT_FAILURE);
    }   
    
    printf("MAIN Thread leaves join calls, the global variable is:%d\n", glob);

    exit(EXIT_SUCCESS); 
}