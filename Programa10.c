//Pedir tres numeros diferentes al usuario, imprimir el menor

#include <stdio.h>

int main(){

    int numero1, numero2, numero3, min;
    
    printf("Ingresa tres numeros: \n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    min = numero1;
    if (numero2 < min)

    min = numero2;
    if (numero3 < min)
    
    min = numero3;

    printf("El numero menor es %d", min);
    
    

    return 0;
}