#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2;

    // Solicita a operacao
    printf("Escolha uma operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    // Solicita os numeros
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    // Verifica e realiza a operacao
    if (operacao == '+') {
        printf("Resultado: %.2f\n", numero1 + numero2);
    } else if (operacao == '-') {
        printf("Resultado: %.2f\n", numero1 - numero2);
    } else if (operacao == '*') {
        printf("Resultado: %.2f\n", numero1 * numero2);
    } else if (operacao == '/') {
        if (numero2 != 0) {
            printf("Resultado: %.2f\n", numero1 / numero2);
        } else {
            printf("Erro: Divisao por zero!\n");
        }
    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}
