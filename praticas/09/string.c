#include <stdio.h>
#include <string.h>

int main() {
    char string[11];  // Declaração da string com 11 caracteres

    // Preenche toda a string com o caractere '\0' (nulo)
    memset(string, '\0', sizeof(string));

    char tecla;
    printf("Digite um caractere: ");
    scanf("%c", &tecla);  // Ler um caractere do usuario

    // Preenche as 10 primeiras posicoes da string com o caractere 'tecla'
    memset(string, tecla, 10);

    // Exibe a string apos o preenchimento
    printf("String apos preenchimento com '%c': %s\n", tecla, string);

    // Preenche as 5 primeiras posicoes da string com o caractere '*'
    memset(string, '*', 5);

    // Exibe a string apos o preenchimento com '*'
    printf("String apos preenchimento com '*': %s\n", string);

    // Define o caractere de termino de string na posicao 5
    string[5] = '\0';

    // Exibe a string apos a modificacao
    printf("String apos definir '\\0' na posicao 5: %s\n", string);

    // Exibe cada caractere da string individualmente
    printf("Conteudo da string caractere por caractere:\n");
    for (int i = 0; i < 10; i++) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
