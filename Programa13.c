//Pedir un número al usuario, imprimirlo n veces

#include <stdio.h>

int main(){

    int numero, imprimir, cont = 0;

    printf("Ingresa un numero entero: \n");
    scanf("%d \n", &numero);

    printf("¿Cuantas veces deseas imprmirlo? \n");
    scanf("%d \n", &imprimir);

    while (cont <= imprimir)
    {
        printf("%d \n", numero);

        cont = cont + 1;
    }

    return 0;
}