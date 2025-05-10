#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float bmi;

    //Se solicita al usuario que ingrese su peso y altura
    printf("Ingrese el peso en kg: \n");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: \n");
    scanf("%f", &altura);

    //Se calcula el BMI
    bmi = peso / (altura * altura);

    //Se enseña el resultado
    printf("Su indice de masa corporal es: %.2f\n", bmi);
    printf("   Índice  | Condición\n");
    printf("-----------|------------\n");
    printf("   <18.5   | Bajo peso\n");
    printf("18.5 - 24.9| Peso normal\n");
    printf("25.0 - 29.9| Sobrepeso\n");
    printf("   >=30.0  | Obesidad\n");

    return 0;
}