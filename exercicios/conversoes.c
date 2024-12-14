#include "stdio.h"


//CRIAÇÃO DE FUNÇÕES ABAIXO
void temperatura(){
    float C, K, F;
    printf("\ninforme a temperatura em Kelvin: ");
    scanf("%f", &K);
    C = K - 273.15;
    F = ((K - 273.15) * 1.8) + 32;
    printf("A temperatura em Celsius: %.2f\n", C);
    printf("A temperatura em Fahrenheit: %.2f\n", F);
}

int main(){
    int opcao;

    printf("==========CONVESOES==========\n");
    printf("\n[1] - Unidades de comprimento");
    printf("\n[2] - Unidades de massa");
    printf("\n[3] - Unidades de volume ");
    printf("\n[4] - Unidades de temperatura ");
    printf("\n\nQual conversao voce deseja realizar? ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            printf("Voce escolheu unidade de comprimento.\n");
            break;
        case 2:
            printf("Voce escolheu unidade de massa.\n");
            break;
        case 3:
            printf("Voce escolheu unidade de volume.\n");
            break;
            case 4:
            printf("Voce escolheu unidade de temperatura.\n");
            temperatura();
            break;
        default:
            printf("Opcao Invalida.\n");
            break;
    }
    
}