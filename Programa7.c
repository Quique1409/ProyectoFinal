//Pedir un numero al usuario, indicar si es positivo

#include <stdio.h>

int main(){

    int numero1;

    printf("Ingresa un numero: ");
    scanf("%d", &numero1);
    if (numero1>0)
    {
        printf("El numero %d es positivo", numero1);
    }
    

    return 0;
}