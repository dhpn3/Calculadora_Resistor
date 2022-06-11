#include "menus.h"
#include <stdio.h>

int menu_cor(char *cor){

    char *preto = "preto";
    char *marrom = "marrom";
    char *vermelho = "vermelho";
    char *laranja = "laranja";
    char *amarelo = "amarelo";
    char *verde = "verde";
    char *azul = "azul";
    char *roxo = "roxo";
    char *cinza = "cinza";
    char *branco = "branco";
    
    if((strcmp(preto, cor) == 0)) return 0;
    else if(strcmp(marrom, cor) == 0) return 1;
    else if(strcmp(vermelho, cor) == 0) return 2;
    else if(strcmp(laranja, cor) == 0) return 3;
    else if(strcmp(amarelo, cor) == 0) return 4;
    else if(strcmp(verde, cor) == 0) return 5;
    else if(strcmp(azul, cor) == 0) return 6;
    else if(strcmp(roxo, cor) == 0) return 7;
    else if(strcmp(cinza, cor) == 0) return 8;
    else if(strcmp(branco, cor) == 0) return 9;
    else{
        printf("\nCor inexistente. Tente novamente...\n");
        //
        main();
    }
}

    void menu_inicial(){
    /*set de quantidade de faixas do resistor pré conversão*/
    int opcao;
    // typeof(opcao) ValidaOpcao;


    printf("\nQuantidade de faixas para o resistor (3 ou 4): ");
    scanf("%d", &opcao);

    // if(ValidaOpcao == opcao){}
    printf("\n\tCalculadora para cores de resistores de %d faixas\n\t\t\t", opcao);
    printf("%c%c%c ", 201,205,205); //print de símbolos
    int i;
    for(i = 0; i<opcao; i++){
        printf("| ");
    }
    printf("%c%c%c", 205,205,187);
    printf("\n");
    fflush(stdout);
    colors_input(opcao);

}
