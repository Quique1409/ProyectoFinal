//Encontrar la media y mediana de 10 numeros

#include <stdio.h>

int main(){

    //Declaramos variables
    float media, mediana;

    //Perdimos al usuario ingresar los 10 numeros.
    printf("--Calcula la media y mediana de 10 valores--\n");
    printf("Los numeros son: 3, 7, 2, 4, 12, 18, 22, 29, 13, 10. \n");

    //Calcular la media y mediana

    media = (3 + 7 + 2 + 4 + 12 + 18 + 22 + 29 + 13 + 10) / 10;

    mediana = 12 + 18;

    //Imprimir en pantalla
    printf("La media es: %.2f \n", media);
    printf("La mediana es: %.2f", mediana);

    return 0;
}