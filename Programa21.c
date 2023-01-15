//Imprimir los numeros impares entre 1 y 100

#include <stdio.h>

int main(){

    int a = 1, b;

    printf("Estos son los numeros impares entre el 1 y 100: \n");

    while (a <= 100)
    {
        printf("%d, ", a);
        a = a + 2;
    }

    return 0;
}