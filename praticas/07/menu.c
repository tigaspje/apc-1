#include <stdio.h>
#include <stdlib.h>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Regular bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Regular underline text
#define UBLK "\e[4;30m"
#define URED "\e[4;31m"
#define UGRN "\e[4;32m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"
#define UWHT "\e[4;37m"

//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"

//High intensty background 
#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"

//High intensty text
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"

//Bold high intensity text
#define BHBLK "\e[1;90m"
#define BHRED "\e[1;91m"
#define BHGRN "\e[1;92m"
#define BHYEL "\e[1;93m"
#define BHBLU "\e[1;94m"
#define BHMAG "\e[1;95m"
#define BHCYN "\e[1;96m"
#define BHWHT "\e[1;97m"

//Reset
#define reset "\e[0m"
#define CRESET "\e[0m"
#define COLOR_RESET "\e[0m"
int main() {
    int opcao = 0;

    while (opcao != 4) {
        system("clear");
        
printf(GRN);
printf(" _________ _______  _______  _______ \n");
printf(" \\__    _/(  ___  )(  ____ \\(  ___  )\n");
printf("    )  (  | (   ) || (    \\/| (   ) |\n");
printf("    |  |  | |   | || |      | |   | |\n");
printf("    |  |  | |   | || | ____ | |   | |\n");
printf("    |  |  | |   | || | \\_  )| |   | |\n");
printf(" |\\_)  )  | (___) || (___) || (___) |\n");
printf(" (____/   (_______)(_______)(_______)\n");

        printf("------------------------\n");
        printf("|        MEU JOGO      |\n");
        printf("------------------------\n");
        printf("|                      |\n");
        printf("|    1 - Novo Jogo     |\n");
        printf("|    2 - Ver Score     |\n");
        printf("|    3 - Sobre         |\n");
        printf("|    4 - Sair          |\n");
        printf("|                      |\n");
        printf("------------------------\n");
        printf("Escolha uma opcao > ");
        scanf("%i", &opcao);
        while(getchar() != '\n'); // Limpa o buffer

        switch(opcao) {
            case 1: {
                int nivel = 0;
                printf("Iniciando novo jogo...\n\n");
                printf("Escolha um nivel\n");
                printf("1 - Facil\n");
                printf("2 - Medio\n");
                printf("3 - Dificil\n");
                printf("> ");
                scanf("%i", &nivel);
                while(getchar() != '\n'); // Limpa o buffer
                printf("Nivel escolhido: %i\n", nivel);
                break;
            }
            case 2:
                printf("Exibindo score...\n\n");
                printf("1 - Jogador A - 10000 pontos\n");
                printf("2 - Jogador A - 7000 pontos\n");
                printf("3 - Jogador A - 6000 pontos\n");
                printf("4 - Jogador A - 5000 pontos\n");
                printf("5 - Jogador A - 3000 pontos\n");
                printf("6 - Jogador A - 1000 pontos\n");
                printf("Pressione ENTER para continuar...");
                getchar(); // Espera ENTER
                break;
            case 3:
                printf("Sobre o jogo: Desenvolvido por voce!\n\n");
                printf("Desenvolvido em C\n");
                printf("Por um programador raiz\n");
                printf("Copyright (C) 2025\n\n");
                printf("Pressione ENTER para continuar...");
                getchar(); // Espera ENTER
                break;
            case 4:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}
