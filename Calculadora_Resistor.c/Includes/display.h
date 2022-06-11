#ifndef _DISPLAY_H
#define _DISPLAY_H

int main();

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
#endif