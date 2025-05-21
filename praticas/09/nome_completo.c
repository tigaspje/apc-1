#include <stdio.h>
#include <string.h>

int main() {
    char primeiro_nome[11], ultimo_nome[11], nome_completo[31];

    // Leitura do primeiro nome e sobrenome
    printf("Digite o primeiro nome: ");
    scanf("%10s", primeiro_nome);
    printf("Digite o sobrenome: ");
    scanf("%10s", ultimo_nome);

    // Copiar o primeiro nome para nome_completo
    strcpy(nome_completo, primeiro_nome);

    // Concatenar um espaço e o sobrenome
    strcat(nome_completo, " ");
    strcat(nome_completo, ultimo_nome);

    // Exibir o nome completo
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}
