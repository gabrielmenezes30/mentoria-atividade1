#include <stdio.h>

//CRIAÇÃO DE FUNÇÕES ABAIXO

void temperatura(){
    float C, K, F;
    int opcao;
    printf("==========Temperatura==========\n");
    printf("\n[1] - Kelvin");
    printf("\n[2] - Celsius");
    printf("\n[3] - Fahrenheit ");
    printf("\nEscolha a unidade de temperatura que sera convertida: ");
    scanf("%d", &opcao);

    switch(opcao){
         
         case 1:
            printf("\nInforme a temperatura em Kelvin: ");
            scanf("%f", &K);
            C = K - 273.15;
            F = ((K - 273.15) * 1.8) + 32;
            printf("A temperatura em Celsius: %.2f C\n", C);
            printf("A temperatura em Fahrenheit: %.2f F\n", F);
             break;

        case 2:
            printf("\nInforme a temperatura em Celsius: ");
            scanf("%f", &C);
            K = C + 273.15;
            F = ( C*1.8) + 32;
            printf("A temperatura em Kelvin: %.2f K\n", K);
            printf("A temperatura em Fahrenheit: %.2f F\n", F);
             break;

        case 3:
            printf("\nInforme a temperatura em Fahrenheit: ");
           scanf("%f", &F);
            C = (F-32)/1.8;
            K = ((F + 459.67) * 5)/9;
            printf("A temperatura em Celsius: %.2f C\n", C);
            printf("A temperatura em Kelvin: %.2f K\n", K);
             break;

        default:
        printf("Opcao Invalida.\n");
        break;      
    }
}

void velocidade(){
    float kmh, ms, mph;
    int opcao;
    printf("==========Velocidade==========\n");
    printf("\n[1] - Quilometro por hora");
    printf("\n[2] - Metros por segundo");
    printf("\n[3] - Milhas por hora");
    printf("\nEscolha a unidade de velocidade que sera convertida: ");
    scanf("%d", &opcao);

    switch(opcao){
         
         case 1:
            printf("\nInforme a velocidade em quilometros por hora: ");
            scanf("%f", &kmh);
            ms = kmh/3.6;
            mph = kmh/1.60934;
            printf("\nA velocidade em metros por segundo: %.2f m/s\n", ms);
            printf("A velocidade em milhas por hora: %.2f mph\n", mph);
             break;

        case 2:
            printf("\nInforme a velocidade em metros por segundo: ");
            scanf("%f", &ms);
            kmh = ms*3.6;
            mph = ms*2.23694;
            printf("\nA velocidade em quilometros por hora: %.2f km/h\n", kmh);
            printf("A velocidade em milhas por hora: %.2f mph\n", mph);
             break;

        case 3:
            printf("\nInforme a velocidade em milhas por hora: ");
            scanf("%f", &mph);
            ms = mph*0.44704;
            kmh = mph*1.61;
            printf("\nA velocidade em metros por segundo: %.2f m/s\n", ms);
            printf("A velocidade em quilometros por hora: %.2f km/h\n", kmh);
             break;

        default:
            printf("Opcao Invalida.\n");
             break;      
    }

}
int main(){
    int opcao;

    printf("==========CONVESOES==========\n");
    printf("\n[1] - Unidades de comprimento");
    printf("\n[2] - Unidades de massa");
    printf("\n[3] - Unidades de volume ");
    printf("\n[4] - Unidades de temperatura ");
    printf("\n[5] - Unidades de velocidade ");
    printf("\n\nEscolha a conversao voce deseja realizar? ");
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
        case 5:
            printf("Voce escolheu unidade de velocidade.\n");
            velocidade();
            break;
        default:
            printf("Opcao Invalida.\n");           
            break;
    }
    
}