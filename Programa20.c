//Pedir los catetos de un triangulo rectangulo, obtener la hipotenusa

#include <stdio.h>
#include <math.h>

int main(){

    float cat_ad, cat_op, hipotenusa;

    printf("--Calcular la hipotenusa de un trinagulo rectangulo--\n");
    
    //Cateto adyacente
    printf("Ingresa el cateto adyacente: \n");
    scanf("%f", &cat_ad);

    //cateto opuesto
    printf("Ingresa el cateto opuesto: \n");
    scanf("%f", &cat_op);

    //Calculos de la hipotenusa

    hipotenusa = sqrt((cat_ad * cat_ad) + (cat_op * cat_op));

    printf("El valor de la hipotenusa es de: %f", hipotenusa);


    return 0;
}