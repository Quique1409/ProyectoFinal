//Pedri el radio de circulo al usuario, obtner al área

#include <stdio.h>

int main(){

    float lado, area;

    printf("Ingresa la medida del lado del cuadrado: \n");
    scanf("%f", &lado);

    //Formula del area

    area = lado * lado;

    printf("El area del cuadrado es: %.2f\n", area);

    return 0;
}