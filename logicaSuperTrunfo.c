#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int opcao, secretNumber;

        printf("Menu Inicial!\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Execução do Jogo\n");
            break;
        
        case 2:
            printf("As Regras são: População vence de PIB, PIB vence de Area e Area vence de População\n");
            printf(" \n");
            break;
        
         case 3:
            printf("Saindo...\n");
            break;
    
        default: printf("Opção inválida.\n");
            break;
        }

        int EscolhaJG, EscolhaCP;
        srand(time(0));

        printf(" \n");
        printf("Jogo dos Paises.\n");
        printf("1. Pressione 1 Para China.\n");
        printf("2. Pressione 2 Para Canadá.\n");
        printf("3. Pressione 3 Para Rússia.\n");
        printf("Boa Sorte!\n");
        scanf("%d", &EscolhaJG);

        EscolhaCP = rand() % 3 +1;

switch (EscolhaJG)
        {
        case 1:
            printf("Jogador: China = População - ");
            break;
        case 2:
            printf("Jogador: Canadá = PIB - ");
            break;
        case 3:
            printf("Jogador: Rússia = Área - ");
            break;

        default: printf("Opção Inválida\n");
            break;
        }

switch (EscolhaCP)
        {
        case 1:
            printf("Computador - China = População\n");
            break;
        case 2:
            printf("Computador - Canadá = PIB\n");
            break;
        case 3:
            printf("Computador:  Rússia = Área\n");
            break;

        }

    if (EscolhaCP == EscolhaJG)
        {printf("Empate\n");}
        
        else if (
        (EscolhaJG ==1) && (EscolhaCP == 2) ||
        (EscolhaJG == 2) && (EscolhaCP == 3) ||
        (EscolhaJG == 3) && (EscolhaCP == 1) ) {
        printf("Você ganhou.");}
        
        else {printf("Você perdeu!");}


    }
