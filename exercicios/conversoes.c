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
            comprimento();
            break;
        case 2:
            printf("Voce escolheu unidade de massa");
            massa();
            break;
        case 3:
            printf("Voce escolheu unidade de volume");
            break;
        default:
            printf("Opcao Invalida");
            break;
    }
    
}

int comprimento() {
printf("============CONVERSOR DE UNIDADE DE COMPRIMENTO============\n");
printf("Informe o valor a ser convertido: \n");
float num=0;
scanf("%f", &num);
printf("\nInforme a medida de origem: \n1-Metro\n2-Centimetro\n3-Milimetro\n");
int origem=0;
scanf("%d", &origem);
printf("\nInforme a medida de destino: \n1-Metro\n2-Centimetro\n3-Milimetro \n");
int destino=0;
scanf("%d", &destino);

switch (origem)
{
case 1:
    if(destino == 1){
        printf("\nValor já convertido");
    }
    else if(destino == 2){
        num = num*100;
        printf("\nValor convertido: %.2f",num);
    }
    else if(destino == 3){
        num = num*1000;
        printf("\nValor convertido: %.2f", num);
    }
    else{
        printf("\nValor de destino invalido");
    }
    break;
case 2:
    if(destino == 1){
        num = num*0.01;
        printf("\nValor convertido: %.2f", num);
    }
    else if(destino == 2){
         printf("\nValor já convertido");
    }
    else if(destino == 3){
        num = num*10;
        printf("\nValor convertido: %.2f", num);
    }
    else{
        printf("\nValor de destino invalido");
    }
break;
case 3:
    if(destino == 1){
        num = num*0.001;
        printf("\nValor convertido: %.2f", num); 
    }
    else if(destino==2){
        num = num*0.1;
        printf("\nValor convertido: %.2f", num);
    }
    else if(destino == 3){
         printf("\nValor já convertido");
    }
    else{
        printf("\nValor de destino invalido");
    }
default:
    printf("\nValor de origem invalido");
    break;
}

return 0;
}

int massa(){
    printf("======CONVERSOR DE UNIDADE DE MASSA======\n");
    printf("Informe o peso a ser convertido: \n");
    float num=0;
    scanf("%f", &num);
    printf("\nInforme a medida de origem: \n1-Quilograma\n2-Grama\n3-Tonelada\n");
    int origem=0;
    scanf("%d", &origem);
    printf("\nINFORME A MEDIDA DE DESTINO: \n1-Quilograma\n2-Grama\n3-Tonelada\n");
    int destino=0;
    scanf("%d", &destino);

    switch (origem)
    {
    case 1:
        if(destino == 1){
            printf("Valor ja convertido");
        }
        else if(destino == 2){
            num = num * 1000;
             printf("Valor convertido: %.2f", num);
        }
        else if(destino == 3){
            num = num * 0.001;
             printf("Valor convertido: %.2f", num);
        }
        else{
            printf("Valor de destino invalido");
        }
        break;
    case 2:
        if(destino == 1){
            num = num*0.001;
             printf("Valor convertido: %.2f", num);
        }
        else if(destino == 2){
            printf("Valor ja convertido");
        }
        else if(destino == 3){
            num = num*0.000001;
             printf("Valor convertido: %.2f", num);
        }
        else{
           printf("Valor de destino invalido"); 
        }
        break;
    case 3:
     if(destino == 1){
            num = num*1000;
             printf("Valor convertido: %.2f", num);
        }
    else if(destino == 2){
        num = num*1000000;
        printf("Valor convertido: %.2f", num);
    }
    else if(destino == 3){
         printf("Valor ja convertido");
    }
    else{
        printf("Valor de destino invalido");   
    }
    break;
    default:
         printf("Valor de origem invalido"); 
        break;
    }
   return 0;
}