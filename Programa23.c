//Calcular el promedio final de 10, 8, 9 cin los siguientes porcentajes 30%, 50%, 20%

#include <stdio.h>


int main(){

    int a = 10, b = 8, c = 9, promedio1, promedio2, promedio3, promgen;

    promgen = (a + b + c)/3;

    promedio1 = (promgen * 30) / 100;
    promedio2 = (promgen * 50) / 100;
    promedio3 = (promgen * 20) / 100;

    printf("Los promedio de los numeros 10, 8, 9 con un porcentaje de 30, 50, 20 son: \n");
    printf("Promedio con 30 es: %d \n", promedio1);
    printf("Promedio con 50 es: %d \n", promedio2);
    printf("Promedio con 20 es: %d \n", promedio3);

    return 0;
}