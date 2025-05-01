// estrutura_switch.c
#include <stdio.h>

int main() {
    int nota;

    printf("Digite uma nota de 1 a 5: ");
    scanf("%d", &nota);

    switch(nota) {
        case 1:
            printf("Voce ganhou '*'.\n");
            break;
        case 2:
            printf("Voce ganhou '**'.\n");
            break;
        case 3:
            printf("Voce ganhou '***'.\n");
            break;
        case 4:
            printf("Voce ganhou ****!\n");
            break;
        case 5:
            printf("Voce ganhou *****!\n");
            break;
        default:
            printf("Nota invalida! Tente novamente.\n");
    }

    return 0;
}
