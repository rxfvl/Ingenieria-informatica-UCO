#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>
#include <time.h>

struct hebras {
    int *v;
    int inicio;
    int final;
};

void *sumaVector(void* entrada)
{
    struct hebras* vectStruct = (struct hebras*)entrada;
    int *suma;
    suma = malloc (sizeof(int));

    
    for (int i = vectStruct[1].inicio; i<vectStruct[1].final; i++)
    {
        *suma += vectStruct->v[i];
    }

    pthread_exit((void*) suma);
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("SYNTAX ERROR: Se espera ./ej3 <numero(2/5)>");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));
    int nHebras = atoi(argv[1]);
    int n=0;
    struct hebras* vectorStruct;
    int *vectorRand;
    int *valor, total;
    int test = 0;
    int inicio = 0;
    int final = 4;
    pthread_t* hebras;

    hebras = malloc (nHebras*sizeof(pthread_t));
    vectorRand = malloc (10*sizeof(int));
    vectorStruct = malloc(nHebras*sizeof(struct hebras));

    for(int i = 0; i<10; i++) {
        *(vectorRand+i) = rand() % 9 + 1;
        printf("%d ", *(vectorRand+i));
        test += *(vectorRand+i);
        
    }
    printf("\n");
    printf("COMPROBACION: %d\n", test);

    switch(nHebras)
    {
        case 2:
            for(int i=0; i<nHebras; i++) {
                vectorStruct[i].v = vectorRand;
                vectorStruct[i].inicio = (inicio + 5)*i;
                vectorStruct[i].final = final + (5*i);
            }

            for(int i = 0; i<2; i++) {
                if((pthread_create((hebras+i), NULL, sumaVector, (void*)&vectorStruct[i])))
                {
                    perror("pthread_create() error\n");
                    printf("Errno value = %d\n", errno);
                    exit(EXIT_FAILURE);
                }
                inicio+=4;
                final = inicio + 5;
            }

            for(int i = 0; i<2; i++) {
                if((pthread_join(*(hebras+i), (void**)&valor)))
                {
                    perror("pthread_join() error\n");
                    printf("Errno value = %d", errno);
                    exit(EXIT_FAILURE);
                }

                total += *valor;
                printf("El total es %d\n", total);
            }
            break;
    }
}
