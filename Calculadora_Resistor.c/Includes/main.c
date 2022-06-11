/*Djhonathan Paiva, junho_2022*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include "menus.h"
#include "input.h"
#include "display.h"

enum VALORES_MENU{
SAIR_MENU = 0,
MENU_INICIAL,
NENHUMA_OPERACAO
};

int main(){

    int escolha;
    do{
        printf("\n\tCalculadora para cores de resistores\n");
        printf("\n\tMenu:\t");
        printf("\n\t0 - Sair\n\t1 - Conversao de cores em valor\n\t2 - Conversao de valor para cores\n\n\t> ");
        scanf("%d", &escolha);
        switch(escolha){
            case SAIR_MENU:
                printf("\nSaindo...");
                break;
            case MENU_INICIAL:
                menu_inicial();
                break;
            case NENHUMA_OPERACAO:
                //fazer ainda
                break;
            default:
                printf("\nOpcao invalida. Tente novamente...\n");
        }
    }while(escolha!=0);

    return 0;
}
