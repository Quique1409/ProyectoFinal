//Pedir un numero al usuario, indicar si es par

#include <stdio.h>

int main(){

    int numero1;
    printf("Ingresa un numero: ");
    scanf("%d", &numero1);

    if (numero1 % 2 == 0)
    {
        printf("El numero %d es par", numero1);
    }
    

    return 0;
}