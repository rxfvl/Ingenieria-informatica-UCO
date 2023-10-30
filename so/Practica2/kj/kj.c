#include <stdio.h>

struct datos
{
    int *v;
    int inicio;
    int final;
};

void *sumar (void* entrada)
{
    struct datos *estructuraRecibida = (struct datos*) entrada;
    int *sumax;

    for (int i=estructuraRecibida.inicio; i<estructuraRecibida.final; i++) {
      *sumax = *suma + dgdfvddgd
    }
}


int main()
{
    pthread_t *hebras;
    hebras = malloc();

    int v[10];
    // Rellenar vector estructuras

    for (int i=0;i<nhebras;i++) {
        pthread_create(hebras[i]);
    }


}