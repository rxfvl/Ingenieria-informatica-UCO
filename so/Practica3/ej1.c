#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int* camisetas;
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

void* clientes(void* entrada)
{
    int* nCamisetas = (int*)entrada;
    int compra = rand() % 10 + 1;
    int camiseta = rand() % (*nCamisetas);

    pthread_mutex_lock(&mtx);
    printf("-> Cliente %lu compra %d uds de la camiseta %d\n", pthread_self(), compra, camiseta+1);
    if ((camisetas[camiseta]) < compra)
    {
        printf("----> ERROR no hay suficientes camisetas, se otorgaran las restantes\n");
        camisetas[camiseta]= 0;
    }
    else
    {
        camisetas[camiseta] -= compra;
    }
    pthread_mutex_unlock(&mtx);
}

void* proveedores(void* entrada)
{
    int* nCamisetas = (int*)entrada;
    int suministro = rand() % 10 + 1;
    int camiseta = rand() % (*nCamisetas);

    pthread_mutex_lock(&mtx);
    printf("-> Proveedor %lu suministra %d uds de la camiseta %d\n", pthread_self(), suministro, camiseta+1);
    camisetas[camiseta] += suministro;
    pthread_mutex_unlock(&mtx);
}

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("SYNTAX ERROR: Se pide ./ej1 <nClientes> <mProveedores>\n");
        exit(EXIT_FAILURE);
    }
    int nClientes = atoi(argv[1]);
    int mProveedores = atoi(argv[2]);
    pthread_t hebrasC[nClientes];
    pthread_t hebrasP[mProveedores];

    srand(time(NULL));

    camisetas = malloc(mProveedores*sizeof(int));

    printf("--- VECTOR CAMISETAS INICIAL ---\n");
    for (int i = 0; i<mProveedores; i++)
    {
        *(camisetas+i) = rand() % 100 + 1;
        printf("%d ", *(camisetas+i));
    }
    printf("\n");

    for(int i = 0; i<nClientes; i++)
    {
        if (pthread_create(&hebrasC[i], NULL, clientes, (void*)&mProveedores))
        {
            printf("pthread_create() error\n");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i<mProveedores; i++)
    {
        if (pthread_create(&hebrasP[i], NULL, proveedores, (void*)&mProveedores))
        {
            printf("pthread_create() error\n");
            exit(EXIT_FAILURE);
        }
    }

    printf("MAIN ESPERANDO A PROVEEDORES Y CLIENTES\n");
    for (int i = 0; i<(nClientes); i++)
    {
        if (pthread_join(hebrasC[i], NULL))
        {
            printf("pthread_join() error\n");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i<mProveedores; i++)
    {
        if (pthread_join(hebrasP[i], NULL))
        {
            printf("pthread_join() error\n");
            exit(EXIT_FAILURE);
        }
    }

    printf("--- VECTOR CAMISETAS FINAL --- \n");
    for (int i = 0; i<mProveedores; i++)
    {
        printf("%d ", *(camisetas+i));
    }
    printf("\n");
    free(camisetas);

    exit(EXIT_SUCCESS);
}