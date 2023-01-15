//Pedir un numero al usuario hasta que adivine uno que hallamos elegido

#include <stdio.h>

int main(){

    int numero, secreto = 13;

    while (numero != secreto)
    {
        printf("Adivina el numero secreto: \n");
        scanf("%d", &numero);
        
    }
    
    printf("Adivinaste el numero secreto: %d", secreto);

    return 0;
}