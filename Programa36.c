//Calcule el promedio de estos 100 elementos (codigo anterior 35)

#include <stdio.h>

int main(){

    int arreglo[100];
    int i, suma = 0;
    float promedio;

    printf("Calcula el promedio del arreglo que contiene los numeros de 200 a 101\n");

    //LLenar arreglo
    for (i = 200; i > 100; i--)
    {
        suma += arreglo[i];
    }

    promedio = suma / 100;

    printf("El promedio de estos 100 elementos es: %.2f", promedio);

    return 0;
}