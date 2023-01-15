//Pedir al usuario un numero e indicar si es multiplo de 3

#include <stdio.h>

int main(){

    int numero;

    printf("Ingresa un numero: \n");
    scanf("%d", &numero);

    //Calcular si es multiplo de 3
    if (numero % 3 == 0)
    {
        printf("El numero %d es multiplo de 3.", numero);
    }
    else
    {
        printf("El numero %d no es un multiplo de 3.", numero);
    }

    return 0;
}