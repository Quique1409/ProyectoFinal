//Pedir un numero al usuario, elevarlo al cubo e imprimirlo

#include <stdio.h>
#include <math.h>

int main(){

    double numero1, elevado=3, numero2;
    printf("Ingresa un numero: ");
    scanf("%lf", &numero1);
    numero2 = pow(numero1, elevado);
    printf("El numero elevado al cubo es: %.2lf", numero2);

    return 0;
}