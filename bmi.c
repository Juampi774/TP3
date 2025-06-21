#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float bmi;

    //Se solicita al usuario que ingrese su peso y altura
    printf("Ingrese el peso en kg: \n");
    scanf("%f", &peso);
    while (peso <= 0) {
        printf("Peso invalido. Debe ser mayor a 0. Intente nuevamente: ");
        scanf("%f", &peso);
    }
    printf("Ingrese la altura en metros: \n");
    scanf("%f", &altura);
    while (altura <= 0) {
        printf("Altura invalida. Debe ser mayor a 0. Intente nuevamente: ");
        scanf("%f", &altura);
    }

    //Se calcula el BMI
    bmi = peso / (altura * altura);

    //Se enseña el resultado
    printf("Su indice de masa corporal es: %.2f\n\n", bmi);
    printf("   Índice  | Condición\n");
    printf("-----------|------------\n");
    printf("   <18.5   | Bajo peso\n");
    printf("18.5 - 24.9| Peso normal\n");
    printf("25.0 - 29.9| Sobrepeso\n");
    printf("   >=30.0  | Obesidad\n\n");

    //Se muestra la condición del usuario
    if (bmi < 18.5)
        printf("Condición: Bajo peso\n");
    else if (bmi >= 18.5 && bmi <= 24.9)
        printf("Condición: Peso normal\n");
    else if (bmi >= 25.0 && bmi < 29.9)
        printf("Condición: Sobrepeso\n");
    else
        printf("Condición: Obesidad\n");

    return 0;
}
