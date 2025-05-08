#include <stdio.h> 

int main() {
    printf("------------------------------\n");
    printf("        NOTA      LEGAL       \n");
    printf("------------------------------\n");
    printf("item            qtd   prc   valor\n");
    printf("%-15s %03i %5.2f %7.2f\n", "caneta azul", 2, 2.0, 4.0);
    printf("%-15s %03i %5.2f %7.2f\n", "borracha",1, 5.0, 5.00);
    printf("%-15s %03i %5.2f %7.2f\n", "resma de papel",1 ,10.0 ,10.0);
    printf("------------------------------\n");
    printf("               TOTAL: R$  %6.2f\n", 19.00);


    return 0;
}