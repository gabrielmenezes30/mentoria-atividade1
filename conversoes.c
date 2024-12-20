#include <stdio.h>

//CRIAÇÃO DE FUNÇÕES ABAIXO

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
    break;
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
             printf("Valor convertido: %.4f", num);
        }
        else{
            printf("Valor de destino invalido");
        }
        break;
    case 2:
        if(destino == 1){
            num = num*0.001;
             printf("Valor convertido: %.4f", num);
        }
        else if(destino == 2){
            printf("Valor ja convertido");
        }
        else if(destino == 3){
            num = num*0.000001;
             printf("Valor convertido: %.6f", num);
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


void volume(){

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


void tempo(){
    int s, m, h;

    int opcao;
    printf("==========TEMPO=========");
    printf("\nEscolha a tipo de conversão");
    printf("\n[1] - segundo para minutos");
    printf("\n[2] - segundo para horas");
    printf("\n[3] - Minutos para segundos");
    printf("\n[4] - Minutos para horas");
    printf("\n[5] - Horas para Minutos");
    printf("\n[6] - Horas para Segundos");
    printf("\nQual opcao deseja: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o valor em segundo:");
            scanf("%d", &s);
            m = s/60;
            printf("O valor em da conversao de segundos para minutos eh: %d", m);
        break;
        case 2:
            printf("Digite o valor em segundo: ");
            scanf("%d", &s);
            h = s/3600;
            printf("O valor em da conversao de segundos para Horas eh: %d", h);
        break;
        case 3:
            printf("Digite o valor em Minutos: ");
            scanf("%d", &m);
            s = m*60;
            printf("O valor em da conversao de Minutos para Segundos eh: %d", s);
        break;
        case 4:
            printf("Digite o valor em Minutos: ");
            scanf("%d", &m);
            h = m/60;
            printf("O valor em da conversao de Minutos para Hora eh: %d", h);
        break;
        case 5:
            printf("Digite o valor em Horas: ");
            scanf("%d", &h);
            m = h*60;
            printf("O valor em da conversao de Horas para Minuto eh: %d", m);
        break;
        case 6:
            printf("Digite o valor em Horas: ");
            scanf("%d", &h);
            s = h*3600;
            printf("O valor em da conversao de Horas para Segundos eh: %d", s);
        break;
    }
    } 

int main(){
    int opcao;

    printf("==========CONVERSOES==========\n");
    printf("\n[1] - Unidades de comprimento");
    printf("\n[2] - Unidades de massa");
    printf("\n[3] - Unidades de volume ");
    printf("\n[4] - Unidades de temperatura ");
    printf("\n[5] - Unidades de velocidade ");
    printf("\n[6] - Unidade de tempo ");
    printf("\n\nEscolha a conversao voce deseja realizar: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 

            printf("Voce escolheu unidade de comprimento\n");
            comprimento();

            break;

        case 2:

            printf("Voce escolheu unidade de massa\n");
            massa();

            break;

        case 3:
            printf("Voce escolheu unidade de volume.\n");
            volume();
            break;

        case 4:
            printf("Voce escolheu unidade de temperatura.\n");
            temperatura();
            break;
        
        case 5:
            printf("Voce escolheu unidade de velocidade.\n");
            velocidade();
            break;
        case 6:
            printf("Voce escolheu unidade de tempo. \n");
            tempo();
            break;
        default:
            printf("Opcao Invalida.\n");           
            break;
    }
    
}
