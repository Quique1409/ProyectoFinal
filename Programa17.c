//Pedir el radio de un circulo al usuario, obtener la circunferencia

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float radio, circunferencia, diametro;

    printf("Ingresa el radio de un circulo: \n");
    scanf("%f", &radio);

    //Calcular la Longitudad de la circunferencia del circulo

    diametro = radio * 2;
    circunferencia = M_PI * diametro;

    printf("La longitud de la circunferencia es de: %.2f", circunferencia);

    return 0;
}