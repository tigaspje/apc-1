#include <stdio.h>

int main() {
    float temperatura;

    // Lê a temperatura do usuário
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    // Verifica a faixa de temperatura e imprime a mensagem
    if (temperatura > 40.0f) {
        printf("Muito quente\n");
    } else if (temperatura > 30.0f && temperatura <= 40.0f) {
        printf("Quente\n");
    } else if (temperatura > 20.0f && temperatura <= 30.0f) {
        printf("Agradável\n");
    } else {
        printf("Frio\n");
    }

    return 0;
}
