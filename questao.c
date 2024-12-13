#include <stdio.h>

int main(){
    printf("======CONVERSOR DE UNIDADES======\n");
    printf("ESCOLHA O TIPO DE CONVERSAO\n1-COMPRIMENTO\n2-MASSA\n");
    int tipo =0;
    scanf("%d", &tipo);
    switch (tipo)
    {
    case 1:
        comprimento();
        break;
    case 2: 
         massa();
         break;
    default:
        printf("OPCAO INVALIDA");
        break;
    }
    return 0;
}


int comprimento() {
printf("============CONVERSOR DE UNIDADE DE COMPRIMENTO============\n");
printf("INFORME O VALOR A SER CONVERTIDO: \n");
float num=0;
scanf("%f", &num);
printf("\nINFORME A MEDIDA DE ORIGEM: \n1-METRO\n2-CENTIMETRO\n3-MILIMETRO\n");
int origem=0;
scanf("%d", &origem);
printf("\nINFORME A MEDIDA DE DESTINO:\n1-METRO\n2-CENTIMETRO\n3-MILIMETRO \n");
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

int massa() {
printf("============CONVERSOR DE UNIDADE DE COMPRIMENTO============\n");
printf("INFORME O VALOR A SER CONVERTIDO: \n");
float num=0;
scanf("%f", &num);
printf("\nINFORME A MEDIDA DE ORIGEM: \n1-METRO\n2-CENTIMETRO\n3-MILIMETRO\n");
int origem=0;
scanf("%d", &origem);
printf("\nINFORME A MEDIDA DE DESTINO:\n1-METRO\n2-CENTIMETRO\n3-MILIMETRO \n");
int destino=0;
scanf("%d", &destino);

switch (origem)
{
case 1:
    if(destino == 1){
        printf("\nValor ja convertido");
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
         printf("\nValor ja convertido");
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
         printf("\nValor ja convertido");
    }
    else{
        printf("\nValor de destino invalido");
    }
    break;
default:
    printf("\nValor de origem invalido");
    break;
}

return 0;
}

