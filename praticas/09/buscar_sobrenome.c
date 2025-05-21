#include <stdio.h>
#include <string.h>

int main() {
    // Declaracao de uma matriz de 10 nomes com ate 100 caracteres
    char nomes[10][101];
    char sobrenome[11];
    int achou = 0;

    // Leitura dos 10 nomes
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%100[^\n]", nomes[i]);  // Ler ate 100 caracteres ou ate o Enter
        getchar();  // Limpa o buffer do teclado
    }

    // Leitura do sobrenome
    printf("Digite o sobrenome a ser buscado: ");
    scanf("%10s", sobrenome);

    // Busca pelos sobrenomes na lista
    for (int i = 0; i < 10; i++) {
        if (strstr(nomes[i], sobrenome) != NULL) {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }

    // Se nenhum sobrenome foi encontrado, exibe uma mensagem
    if (!achou) {
        printf("Nenhum nome tem o sobrenome!\n");
    }

    return 0;
}
