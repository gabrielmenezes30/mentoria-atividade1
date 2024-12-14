#include "stdio.h"


//CRIAÇÃO DE FUNÇÕES ABAIXO


int main(){
    int opcao;

    printf("Qual conversao voce deseja realizar? ");
    printf("\n[1] - Unidades de comprimento");
    printf("\n[2] - Unidades de massa");
    printf("\n[3] - Unidades de volume ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            printf("Voce escolheu unidade de comprimento");
            break;
        case 2:
            printf("Voce escolheu unidade de massa");
            break;
        case 3:
            printf("Voce escolheu unidade de volume");
            break;
        default:
            printf("Opcao Invalida");
            break;
    }
    
}