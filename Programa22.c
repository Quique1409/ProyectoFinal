//Pedir al usuario y calcular el promedio de 5 numeros

#include <stdio.h>

int  main(){

    int numero1, numero2, numero3, numero4, numero5, promedio;

    printf("Ingresa 5 numero separados por una coma y un espacio: \n");
    scanf("%d," "%d," "%d," "%d," "%d", &numero1, &numero2, &numero3, &numero4, &numero5);

    //Calculos para el promedio de los datos
    promedio = (numero1 + numero2 + numero3 + numero4 + numero5)/5;
    printf("El promedio de los 5 valores ingresados es: %d", promedio);

    return 0;
}