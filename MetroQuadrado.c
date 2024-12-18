#include "stdio.h"


//CRIAÇÃO DE FUNÇÕES ABAIXO


int main(){
    int opcao;

printf("Qual conversao voce deseja realizar?\n");
printf("1 - Unidade de metro quadrado\n");
printf("2 - Unidade de centimetro quadrado\n");
scanf("%d", &opcao);

switch(opcao){
    case 1:
        printf("Voce escolheu unidade de metro quadrado\n");
        break;
    case 2:
        printf("Voce escolheu unidade de centimetro quadrado\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;

    }
}
