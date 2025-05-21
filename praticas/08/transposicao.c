#include <stdio.h>

int main() {
    char frase[31];
    char matriz[6][5];
    int k = 0;

    // Leitura da frase
    printf("Digite uma frase (max 30 caracteres): ");
    scanf("%30[^\n]", frase);  // Lê até 30 caracteres ou até o Enter

    // Preenchendo a matriz com os caracteres da frase
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            if (frase[k] != '\0') {
                matriz[i][j] = frase[k++];
            } else {
                matriz[i][j] = ' ';  // Preenche com espaço se acabar a frase
            }
        }
    }

    // Imprimindo a transposta da matriz
    printf("\nA transposta da frase eh:\n");
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 6; i++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
