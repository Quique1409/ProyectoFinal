//Pedir un numero al usuario y calcular el valor absoluto

#include <stdio.h>

int main(){

    int numero1;
    printf("Ingresa un numero: ");
    scanf("%d", &numero1);

    if (numero1 > 0)
    {
        printf("El valor absoluto es: %d", numero1);
    }
    else
    {
        printf("El valor absoluto es: %d ", numero1 * -1);
    }
    

    return 0;
}