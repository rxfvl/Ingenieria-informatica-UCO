#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define VECTOR_SIZE 10

// Estructura para pasar datos a cada hilo
typedef struct {
    int* vector;
    int start;
    int end;
} ThreadData;

// Función para sumar elementos en una parte del vector
void* sumVectorPart(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    int *sum;
    sum = calloc(1, sizeof(int));
    for (int i = data->start; i < data->end; ++i) {
        *sum += data->vector[i];
    }
    printf("Hebra: %d\n", *sum);
    pthread_exit((void*) sum);
}

int main(int argc, char* argv[]) {
    int numThreads = 0, *valor, test = 0;

    if (argc != 2) {
        printf("Uso: ./programa [2 o 5]\n");
        return 1;
    }

    // Obtener el número de hilos desde el argumento
    numThreads = atoi(argv[1]);
    if (numThreads != 2 && numThreads != 5) {
        printf("El número de hilos debe ser 2 o 5\n");
        return 1;
    }

    int vector[VECTOR_SIZE];

    // Rellena el vector con números aleatorios entre 1 y 9
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        vector[i] = rand() % 9 + 1;
        printf("%d ", vector[i]);
        test += vector[i];
    }
    printf("\nCOMPROBACION = %d\n", test);

    pthread_t threads[numThreads];
    ThreadData threadData[numThreads];
    int elementsPerThread = VECTOR_SIZE / numThreads;
    
    // Divide el trabajo entre los hilos
    for (int i = 0; i < numThreads; ++i) {
        threadData[i].vector = vector;
        threadData[i].start = i * elementsPerThread;
        threadData[i].end = (i + 1) * elementsPerThread;

        if (i == numThreads - 1) {
            // Asegura que el último hilo maneje los elementos restantes si no son divisibles uniformemente
            threadData[i].end = VECTOR_SIZE;
        }

        // Crea los hilos y calcula la suma parcial para cada parte del vector
        pthread_create(&threads[i], NULL, sumVectorPart, &threadData[i]);
    }

    int totalSum = 0;

    // Espera a que todos los hilos terminen y obtiene la suma total
    for (int i = 0; i < numThreads; ++i) {
        pthread_join(threads[i], (void**) &valor);
        totalSum += *valor;
    }

    // Muestra la suma total
    printf("La suma total es: %d\n", totalSum);

    return 0;
}