#include "stdio.h"


//CRIAÇÃO DE FUNÇÕES ABAIXO

void temperatura(){
    float C, K, F;
    printf("\nInforme a temperatura em Kelvin: ");
    scanf("%f", &K);
    C = K - 273.15;
    F = ((K - 273.15) * 1.8) + 32;
    printf("A temperatura em Celsius: %.2f\n", C);
    printf("A temperatura em Fahrenheit: %.2f\n", F);
}


int volume() {
    printf("== Conversor de Volume ==\n");
    float valor=0;
    int medida_origem=0;
    int medida_destino=0;

    printf("INFORME O VALOR A SER CONVERTIDO: \n");
    scanf("%f", &valor);

    printf("\nINFORME A MEDIDA DE ORIGEM: \n1 - Litro (L) \n2 - Mililitro (ml) \n3 - Metros Cubicos (m3)\n");
    scanf("%d", &medida_origem);

    printf("\nINFORME A MEDIDA DE DESTINO: \n1 - Litro (L) \n2 - Mililitro (ml) \n3 - Metros Cubicos (m3)\n");
    scanf("%d", &medida_destino);

    if(medida_origem==1){
        if(medida_destino==1){
         printf("\nValor nao precisa de conversao.");
        }
        else if(medida_destino==2){
         printf("O valor convertido sera %.2f ml \n", valor*1000);
        }
        else if(medida_destino==3){
         printf("O valor convertido sera %.3f m3 \n", valor/1000);
        }    
    }
    if(medida_origem==2){
        if(medida_destino==1){
         printf("O valor convertido sera %.3f L \n", valor/1000);        
         }
        else if(medida_destino==2){
         printf("\nValor nao precisa de conversao.");
        }
        else if(medida_destino==3){
         printf("O valor convertido sera %.3f m3 \n", valor/1000000);
        }    
    }
    if(medida_origem==3){
        if(medida_destino==1){
         printf("O valor convertido sera %.2f L \n", valor*1000);        
         }
        else if(medida_destino==2){
         printf("O valor convertido sera %.2f ml \n", valor*1000000);        
        }
        else if(medida_destino==3){
         printf("\nValor nao precisa de conversao.");
        }    
    }

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