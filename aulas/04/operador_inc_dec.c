#include <stdio.h>

int main() {
    // ++ aumenta 1
    // -- diminui 1

    int numero = 10;
    printf("pre-incrementa numero = %i\n", ++numero);
    printf("pre-decrementa numero = %i\n", --numero);
    printf("pos-incrementa numero = %i\n", numero++);
    printf("pos-decrementa numero = %i\n", numero--);
    return 0;
}