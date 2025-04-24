#include <stdio.h>

int main() {
    int numero;

    printf("informe um numero inteiro: ");
    scanf("%i", &numero);
    getchar();
    printf("o numero informando foi %i\n", numero);

    float nota; 
    printf("informa uma nota entre 0.0 a 10.0: ");
    scanf("%f", &nota);
    printf("a sua nota foi %.1f\n", nota);
    return 0;
}