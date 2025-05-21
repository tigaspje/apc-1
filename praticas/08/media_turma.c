#include <stdio.h>

int main() {
    float notas[10], soma = 0.0f, media;
    int qtde_acima_media = 0;

    // Leitura das notas
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calculo da media
    media = soma / 10;

    // Contagem de alunos acima da media
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            qtde_acima_media++;
        }
    }

    // Exibicao dos resultados
    printf("\nMedia da turma: %.2f", media);
    printf("\nQuantidade de alunos com nota acima da media: %d", qtde_acima_media);

    return 0;
}
