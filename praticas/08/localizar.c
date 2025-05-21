#include <stdio.h>

int main() {
    int numeros[10];

    // Preenchendo a matriz
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Lendo o numero a ser localizado
    int numero;
    printf("Digite o numero a ser localizado: ");
    scanf("%d", &numero);

    // Inicializando a variavel achou
    int achou = -1;

    // Procurando o numero na matriz
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == numero) {
            achou = i;
            break;
        }
    }

    // Exibindo o resultado
    if (achou < 0) {
        printf("O numero não foi encontrado!\n");
    } else {
        printf("O numero foi encontrado na posicao %d.\n", achou);
    }

    return 0;
}
