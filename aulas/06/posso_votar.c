#include <stdio.h>

int main()
{
    int idade = 0;

    printf("informe sua idade: ");
    scanf("%i", &idade);

    if (idade >= 16)
    {

        if (idade >= 18 && idade <= 70)
        {
            printf("voce eh obrigado a votar!\n");
        }
        else
        {
            printf("voce pode votar\n");
        }
    }
    else
    {
        printf("voce naum pode votar\n");
    }

    return 0;
}  
