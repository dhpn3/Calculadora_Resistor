#ifndef _INPUT_H
#define _INPUT_H

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
#endif