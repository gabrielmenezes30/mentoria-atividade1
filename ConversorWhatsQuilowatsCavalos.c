#include <stdio.h>
#include <locale.h>

void potencia(double valor, int medida_origem, int medida_destino) {
    double kilowatts, horsepower, watts;

    if (medida_origem == 1) { // Watts
        kilowatts = valor / 1000;
        horsepower = valor / 735.5;
        
        if (medida_destino == 1) {
            printf("\nValor não precisa de conversão.\n");
        } else if (medida_destino == 2) {
            printf("O valor convertido será %.2f kW\n", kilowatts);
        } else if (medida_destino == 3) {
            printf("O valor convertido será %.2f cv\n", horsepower);
        }
    } else if (medida_origem == 2) { // Quilowatts
        watts = valor * 1000;
        horsepower = watts / 735.5;
        
        if (medida_destino == 1) {
            printf("O valor convertido será %.2f W\n", watts);
        } else if (medida_destino == 2) {
            printf("\nValor não precisa de conversão.\n");
        } else if (medida_destino == 3) {
            printf("O valor convertido será %.2f cv\n", horsepower);
        }
    } else if (medida_origem == 3) { // Cavalos-vapor
        watts = valor * 735.5;
        kilowatts = watts / 1000;
        
        if (medida_destino == 1) {
            printf("O valor convertido será %.2f W\n", watts);
        } else if (medida_destino == 2) {
            printf("O valor convertido será %.2f kW\n", kilowatts);
        } else if (medida_destino == 3) {
            printf("\nValor não precisa de conversão.\n");
        }
    } else {
        printf("Escolha inválida!\n");
    }
}

int main() {
    setlocale(LC_ALL, "");
    printf("== Conversor de Unidades de Potência ==\n");
    double valor = 0;
    int medida_origem = 0;
    int medida_destino = 0;

    printf("INFORME O VALOR A SER CONVERTIDO: \n");
    scanf("%lf", &valor);

    printf("\nINFORME A MEDIDA DE ORIGEM: \n1 - Watts (W) \n2 - Quilowatts (kW) \n3 - Cavalos-vapor (cv)\n");
    scanf("%d", &medida_origem);

    printf("\nINFORME A MEDIDA DE DESTINO: \n1 - Watts (W) \n2 - Quilowatts (kW) \n3 - Cavalos-vapor (cv)\n");
    scanf("%d", &medida_destino);

    potencia(valor, medida_origem, medida_destino);

    return 0;
}
