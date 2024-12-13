#include <stdio.h>
#include <locale.h>

void convertWattsToOthers(double watts) {
    double kilowatts = watts / 1000;
    double horsepower = watts / 735.5; // 1 cv = 735.5 W (aprox.)

    printf("%.2f Watts = %.2f Kilowatts\n", watts, kilowatts);
    printf("%.2f Watts = %.2f Cavalos-vapor\n", watts, horsepower);
}

void convertKilowattsToOthers(double kilowatts) {
    double watts = kilowatts * 1000;
    double horsepower = watts / 735.5; // 1 cv = 735.5 W (aprox.)

    printf("%.2f Kilowatts = %.2f Watts\n", kilowatts, watts);
    printf("%.2f Kilowatts = %.2f Cavalos-vapor\n", kilowatts, horsepower);
}

void convertHorsepowerToOthers(double horsepower) {
    double watts = horsepower * 735.5; // 1 cv = 735.5 W (aprox.)
    double kilowatts = watts / 1000;

    printf("%.2f Cavalos-vapor = %.2f Watts\n", horsepower, watts);
    printf("%.2f Cavalos-vapor = %.2f Kilowatts\n", horsepower, kilowatts);
}

int main() {
    int choice;
    double value;

    printf("Conversor de Unidades de Potência\n");
    printf("Escolha uma opção:\n");
    printf("1. Converter de Watts para outras unidades\n");
    printf("2. Converter de Quilowatts para outras unidades\n");
    printf("3. Converter de Cavalos-vapor para outras unidades\n");
    printf("Escolha: ");
    scanf("%d", &choice);

    printf("Insira o valor a ser convertido: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            convertWattsToOthers(value);
            break;
        case 2:
            convertKilowattsToOthers(value);
            break;
        case 3:
            convertHorsepowerToOthers(value);
            break;
        default:
            printf("Escolha inválida!\n");
    }

    return 0;
}
