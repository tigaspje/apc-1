#include <stdio.h>
#include <math.h>

int main() {
    // Declaracao das variaveis
    int a, b, c;
    float delta, x1, x2;

    // Leitura dos coeficientes a, b e c
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Cálculo de delta
    delta = b * b - 4 * a * c;

    // Se delta for negativo, nao ha raizes reais
    if (delta < 0) {
        printf("A equacao nao tem raizes reais.\n");
    }
    // Se delta for positivo, calcula as raizes
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        // Imprime as raizes
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
