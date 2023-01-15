//Pedir un numero al usuario sumarle 1 e imprimirlo

#include <stdio.h>

int main(){

    int numero1;

    printf("Ingresa un numero: ");
    scanf("%d", &numero1);
    printf("El numero mas 1 es: %d", numero1+1);

    return 0;
}