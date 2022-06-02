/*Djhonathan Paiva, junho_2022*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int display(int result){
    printf("\n\t O resistor %c: %d ohms\n", 130, result); //desconsiderando a potência e a tolerância de 5% ou 10%
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
        return main();
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
        return main();
    }
}

void colors_input(int opcao){
    char firstcolor[20];    //most significant value | string
    char secondcolor[20];
    char thirdcolor[20];
    char fourthcolor[20];
    int first, second, third, fourth;   //valores atribuidos a cada cor | number

    fflush(stdin);
    printf("\nDigite a primeira cor: ");
    gets(firstcolor);
    printf("\nDigite a segunda cor: ");
    gets(secondcolor);
    printf("\nDigite a terceira cor: ");
    gets(thirdcolor);
    if(opcao == 4){
        printf("\nDigite a quarta cor: ");
        gets(fourthcolor);
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
    printf("\nQuantidade de faixas para o resistor (3 ou 4): ");
    scanf("%d", &opcao);
    printf("\n\tCalculadora para cores de resistores de %d faixas\n\t\t\t", opcao);
    printf("%c%c%c ", 201,205,205); //print de símbolos
    for(int i = 0; i<opcao; i++){
        printf("| ");
    }
    printf("%c%c%c", 205,205,187);
    printf("\n");
    fflush(stdin);
    colors_input(opcao);
}

int main(){
    printf("\n\tCalculadora para cores de resistores");
    menu_inicial();
    return 0;
}