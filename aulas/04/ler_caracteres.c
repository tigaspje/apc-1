#include <stdio.h>

int main() {
    char tecla;

    printf("pressione uma tecla e depois ENTER:");

    scanf("%c", &tecla); //nao sabe tecla = valor 
                        //entao precisa acessar endereco 
                        //da variavel com o operador & 

    getchar();
    printf("voce pressionou a tecla '%c'\n", tecla);      
    printf("pressione outra tecla e depoid ENTER:");
    scanf("%c", &tecla);
    getchar();    
    printf("voce pressionou a tecla '%c'\n", tecla);      


    char nome[31];
    printf("informe seu nome:");
    scanf("%[^\n]s", nome);
    printf("ola %s!\n", nome);

    return 0;
}