//Pedir la base y la altura de un triangulo, obtener el area

#include <stdio.h>

int main(){

    float base, altura, area;

    printf("Ingresa la base y la altura, separados por una coma: \n");
    scanf("%f," "%f", &base, &altura);

    //Calculos para el area

    area = (base * altura)/2;

    printf("\nLa area del tringulo con base %.2f y altura %.2f es: %.2f", base, altura, area);


    return 0;
}