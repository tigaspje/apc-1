#include <stdio.h>
#include <string.h>

int main() {
    // Declaracao dos pronomes
    char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
    
    // Declaracao dos sufixos
    char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
    
    // Declaracao do verbo
    char verbo[21];
    
    // Leitura do verbo
    printf("Digite o verbo no infinitivo: ");
    scanf("%20s", verbo);  // Ler ate 20 caracteres do verbo

    // Calcula a posicao da ultima e penultima letra do verbo
    int ultima_posicao = strlen(verbo) - 1;
    int penultima_posicao = ultima_posicao - 1;

    // Verifica se o verbo termina em "AR"
    if (verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') {
        // Declaração do radical
        char radical[21];

        // Copia o verbo para o radical
        strcpy(radical, verbo);

        // Substitui a ultima letra "R" do verbo por '\0' para formar o radical
        radical[penultima_posicao] = '\0';

        // Imprime a conjugacao no presente do indicativo
        for (int i = 0; i < 6; i++) {
            printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
        }
    } else {
        // Caso o verbo nao termine em "AR"
        printf("O verbo nao termina em AR!\n");
    }

    return 0;
}
