#include <stdio.h>

int main(){
    printf("======CONVERSOR DE UNIDADES======\n");
    printf("ESCOLHA O TIPO DE CONVERSAO\n1-COMPRIMENTO\n2-MASSA\n3-VOLUME\n4-TEMPERATURA\n5-VELOCIDADE\n6-POTENCIA\n7-AREA\n8-TEMPO\n9-MEMORIA\n");
    int tipo =0;
    scanf("%d", &tipo);
    // Estrutura de seleção para executar a conversão com base na escolha do usuário
    switch (tipo)
    {
    case 1:
    // Chama a função para conversão de comprimento
        comprimento();
        break;
    case 2: 
        // Chama a função para conversão de massa
         massa();
         break;
    case 3: 
         volume();
         break;
    default:
     // Caso o usuário insira uma opção inválida
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



int massa(){
    printf("======CONVERSOR DE UNIDADE DE MASSA======\n");
    printf("INFORME O PESO A SER CONVERTIDO: \n");
    float num=0;
    scanf("%f", &num);
    printf("\nINFORME A MEDIDA DE ORIGEM: \n1-QUILOGRAMA\n2-GRAMA\n3-TONELADA\n");
    int origem=0;
    scanf("%d", &origem);
    printf("\nINFORME A MEDIDA DE DESTINO: \n1-QUILOGRAMA\n2-GRAMA\n3-TONELADA\n");
    int destino=0;
    scanf("%d", &destino);

    switch (origem)
    {
    case 1:
        if(destino == 1){
            printf("VALOR JA CONVERTIDO");
        }
        else if(destino == 2){
            num = num * 1000;
            printf("VALOR CONVERTIDO: %.2f", num);
        }
        else if(destino == 3){
            num = num * 0.001;
            printf("VALOR CONVERTIDO: %.2f", num);
        }
        else{
            printf("VALOR DE DESTINO INVALIDO");
        }
        break;
    case 2:
        if(destino == 1){
            num = num*0.001;
            printf("VALOR CONVERTIDO: %.2f", num);
        }
        else if(destino == 2){
            printf("VALOR JA CONVERTIDO");
        }
        else if(destino == 3){
            num = num*0.000001;
            printf("VALOR CONVERTIDO: %.2f", num);
        }
        else{
           printf("VALOR DE DESTINO INVALIDO"); 
        }
        break;
    case 3:
     if(destino == 1){
            num = num*1000;
            printf("VALOR CONVERTIDO: %.2f", num);
        }
    else if(destino == 2){
        num = num*1000000;
        printf("VALOR CONVERTIDO: %.2f", num);
    }
    else if(destino == 3){
         printf("VALOR JA CONVERTIDO");
    }
    else{
        printf("VALOR DE DESTINO INVALIDO");   
    }
    break;
    default:
         printf("VALOR DE ORIGEM INVALIDO"); 
        break;
    }
   return 0;
}

int volume() {
    printf("== Conversor de Volume ==\n");
    float num=0;
    int origem=0;
    int destino=0;

    printf("INFORME O VALOR A SER CONVERTIDO: \n");
    scanf("%f", &num);

    printf("\nINFORME A MEDIDA DE ORIGEM: \n1 - Litro (L) \n2 - Mililitro (ml) \n3 - Metros Cubicos (m3)\n");
    scanf("%d", &origem);

    printf("\nINFORME A MEDIDA DE DESTINO: \n1 - Litro (L) \n2 - Mililitro (ml) \n3 - Metros Cubicos (m3)\n");
    scanf("%d", &destino);

    if(origem==1){
        if(destino==1){
         printf("\nValor nao precisa de conversao.");
        }
        else if(destino==2){
         printf("O valor convertido sera %.2f ml \n", num*1000);
        }
        else if(destino==3){
         printf("O valor convertido sera %.3f m3 \n", num/1000);
        }    
    }
    if(origem==2){
        if(destino==1){
         printf("O valor convertido sera %.3f L \n", num/1000);        
         }
        else if(destino==2){
         printf("\nValor nao precisa de conversao.");
        }
        else if(destino==3){
         printf("O valor convertido sera %.3f m3 \n", num/1000000);
        }    
    }
    if(origem==3){
        if(destino==1){
         printf("O valor convertido sera %.2f L \n", num*1000);        
         }
        else if(destino==2){
         printf("O valor convertido sera %.2f ml \n", num*1000000);        
        }
        else if(destino==3){
         printf("\nValor nao precisa de conversao.");
        }    
    }

}

