//Imprimir los valores de y=3*x*x+2*x de 0 a 1 cada 0.01 unidades

#include <stdio.h>

int main(){

    float x = 0, y;

    printf("Los resultados para la ecuacion y=3*x*x+2*x con valores en x de 0 a 1 en 0.01.\n");

    //Calculos para la ecuación.

    while (x<=1)
    {
        y = (3*x*x) + (2*x);

        printf("El resultado de y cuando x = %.2f es: %.2f \n", x, y);

        x = x + 0.01;

    }
    
    printf("Fin del programa.");

    return 0;
}