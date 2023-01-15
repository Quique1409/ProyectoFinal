//Pedir el radio de un circulo al usuario, obtener el area

#include <stdio.h>
#include <math.h>

int main(){

    float area, radio;


    printf("Ingresa el radio del circulo: \n");
    scanf("%f", &radio);

    //Calcular su area del circulo

    area = ((M_PI)*(radio*radio));

    printf("El area del cirulo es: %.2f \n", area);


    return 0;
}