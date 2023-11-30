#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

void* contarLineas(void *entrada)
{
    char* nombreFich = (char*)entrada;
    char cadena[100];
    int *nLineas;
    nLineas = calloc (1, sizeof(int));
    FILE* fichero;
    if((fichero=fopen(nombreFich, "r"))==NULL)
    {
        fprintf(stderr, "El fichero <%s> no existe\n", nombreFich);
        exit(EXIT_FAILURE);
    }
    while((fgets(cadena, 100, fichero)) != NULL)
    {
        (*nLineas)++;
    }

    fclose(fichero);
    pthread_exit((void*) nLineas);
}

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "SYNTAX ERROR: Se espera ./ej2 <fichero1> <fichero2> ... <ficheroN>\n");
        exit(EXIT_FAILURE);
    }

    int nFicheros = argc - 1;
    int total = 0, *lineas;
    pthread_t* hebras;
    hebras = malloc(nFicheros*sizeof(pthread_t));
    

    for (int i=0; i<nFicheros; i++) {
        if((pthread_create((hebras+i), NULL, contarLineas, (void*)argv[i+1])))
        {
            perror("Pthread_create() error\n");
            printf("Errno value = %d\n", errno);
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i<nFicheros; i++) {
        if((pthread_join(*(hebras+i), (void**) &lineas)))
        {
            perror("pthread_join() error\n");
            printf("Errno value = %d", errno);
            exit(EXIT_FAILURE);
        }
        total += *lineas;
    }
    free(hebras);
    printf("El total de lineas de los ficheros es %d\n", total);

}