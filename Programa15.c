//Pedir un numero al usuario y obtenr su factorial

#include <stdio.h>

int main(){

    int numero, cont, factorial = 1;

    printf("Ingresa un numero para calcular su factorial: \n");
    scanf("%d", &numero);

    //Para calcular el factorial
    for ( cont = 1; cont <= numero; cont++)
    {
        factorial = factorial * cont;
    }
    
    printf("Factorial de %d es: %d \n", numero, factorial);

    return 0;
}