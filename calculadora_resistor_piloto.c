/*Djhonathan Paiva, junho_2022*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

enum VALORES_MENU{
SAIR_MENU = 0,
MENU_INICIAL,
NENHUMA_OPERACAO
};

int display(double result){
    //teste se o resistor é ohms ou kiloohms, desconsiderando a potência e a tolerância de 5% ou 10%
    if(result >= 1000){
        double ohms = (result/1000);
        printf("\n\t O valor do resistor %c: %.0f kiloohms\n", 130, ohms);
    }
    else{
        printf("\n\t O valor do resistor %c: %.2f ohms\n", 130, result);
    }
    system("pause");
    return 0;
}

void concatena_valores(int first, int second, int third, int fourth, int opcao){
    double result;
    if(opcao == 3){
        int value = (first*(int)(pow(10, 1)) + second*(int)(pow(10, 0)));
        double third_double = (pow(10, third));
        result = value * third_double;
    }
    else if(opcao == 4){
        int value = (first*(int)(pow(10, 2)) + second*(int)(pow(10, 1))+ third*(int)(pow(10, 0)));
        double fourth_double = (pow(10, fourth));
        result = value * fourth_double;
    }
    else{
        printf("\nQuantidade invalida. Tente novamente...\n");
        main();
    }
   display(result);
}
 
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


void colors_input(int opcao){
    char firstcolor[20];    //most significant value | string
    char secondcolor[20];
    char thirdcolor[20];
    char fourthcolor[20];
    int first, second, third, fourth;   //valores atribuidos a cada cor | number

    printf("aaaaaa");
    printf("aqui ok");
    puts("\nDigite a primeira cor: ");
    // gets(firstcolor);
    scanf("%s", firstcolor);
    fflush(stdin);
    printf("\nDigite a segunda cor: ");
     scanf("%s", secondcolor);
    printf("\nDigite a terceira cor: ");
     scanf("%s", thirdcolor);
    if(opcao == 4){
        printf("\nDigite a quarta cor: ");
         scanf("%s", fourthcolor);
    }

    first = menu_cor(firstcolor);
    second = menu_cor(secondcolor);
    third = menu_cor(thirdcolor);
    if(opcao == 4){
        fourth = menu_cor(fourthcolor);
    }
    fflush(stdin);
    concatena_valores(first, second, third, fourth, opcao);
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
    for(int i = 0; i<opcao; i++){
        printf("| ");
    }
    printf("%c%c%c", 205,205,187);
    printf("\n");
    fflush(stdout);
    colors_input(opcao);

}

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