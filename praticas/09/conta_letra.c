#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], letra;
    int quantidade = 0;

    // Leitura da frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Leitura da letra
    printf("Digite a letra que deseja contar: ");
    scanf("%c", &letra);

    // Contagem das ocorrências
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            quantidade++;
        }
    }

    // Exibição do resultado
    if (quantidade > 0) {
        printf("A letra '%c' aparece %d vez(es) na frase.\n", letra, quantidade);
    } else {
        printf("A frase não contém a letra '%c'.\n", letra);
    }

    return 0;
}
