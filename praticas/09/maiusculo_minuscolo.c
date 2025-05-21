#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[11], maiusculo[11], minusculo[11];

    // Leitura da string
    printf("Digite uma string (maximo 10 caracteres): ");
    scanf("%10s", string);

    // Inicialização das strings de maiusculo e minusculo
    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));

    // Conversao dos caracteres
    for (int i = 0; i < strlen(string); i++) {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }

    // Impressao dos resultados
    printf("Maiusculo: %s\n", maiusculo);
    printf("Minusculo: %s\n", minusculo);

    return 0;
}
