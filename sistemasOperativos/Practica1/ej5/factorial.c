#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("SYNTAX ERROR: La sintaxis del programa debe ser: ./factorial <n>\n");
        exit(EXIT_FAILURE);
    }

    long int fact = 1;
    int n = atoi(argv[1]);

    for(int i = 0; i<n; i++)
    {
        fact = fact*i + fact;
    }

    printf("El factorial de tu numero es %ld\n", fact);
    sleep(1);

}