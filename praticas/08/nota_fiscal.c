#include <stdio.h>

int main() {
    float total = 0.0f;
    float nota_fiscal[5][3];

    // Leitura dos dados
    for (int i = 0; i < 5; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Quantidade: ");
        scanf("%f", &nota_fiscal[i][0]);
        printf("Preco unitario: ");
        scanf("%f", &nota_fiscal[i][1]);
        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
        total += nota_fiscal[i][2];
        printf("\n");
    }

    // Exibicao dos valores
    for (int i = 0; i < 5; i++) {
        printf("Produto %d: %.2f x %.2f = %.2f\n",
               i + 1,
               nota_fiscal[i][0],
               nota_fiscal[i][1],
               nota_fiscal[i][2]);
    }

    // Exibicao do total
    printf("\nValor total da nota fiscal: %.2f\n", total);

    return 0;
}
