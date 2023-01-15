//Pedir los coeficinetes de una ecuacion de segundo grado y obtner las raices. Si son imaginarias idicar un error

#include <stdio.h>
#include <math.h>

int main(){

    float valorA, valorB, valorC, resultadox1, resultadox2, discriminante;

    printf("--Calcula las raices de una ecuacion de segundo grado--\n");
    //Coeficiente A
    printf("Ingresa el valor del coeficiente A, distinto a 0: ");
    scanf("%f", &valorA);
    //Coeficiente B
    printf("\nIngresa el valor del coeficiente B: ");
    scanf("%f", &valorB);
    //Coeficiente C
    printf("\nIngresa el valor del coefiente C: ");
    scanf("%f", &valorC);

    //Calcular el discriminante;
    discriminante = (powf(valorB, 2)) - (4 * (valorA * valorC));

    //Si el discriminante es mayor a 0 quiere decir que obtendremos dos soluciones reales distintas
    if (discriminante  > 0)
    {
        printf("--Las dos raices son reales--\n");
        //Calcular primera raiz
        resultadox1 = ((-valorB + sqrtf(discriminante)) / (2 * valorA));
        //Calcular la segunda raiz
        resultadox2 = ((-valorB - sqrtf(discriminante)) / (2 * valorA));
        //Imprimimos los valores en pantalla
        printf("Raiz x1 = %.2f      Raiz x2 = %.2f\n", resultadox1, resultadox2);
    }
    //Si el discriminante es igual a 0 solo tiene una solución 
    else
    {
        if (discriminante == 0)
        {
            //Se omite la suma del discriminate ya que es 0
            resultadox1 = ((-valorB) / (2 * valorA));
            //Imprimimos la raiz en pantalla
            printf("La ecuacion tiene raiz unica real: %.2f\n", resultadox1); 
        }
        else
        {
            //En caso de que el discriminante tenga valor menor que 0 sus raices pasan a ser imaginarias
            printf("El discriminante es menor que 0 por lo que sus raices son imaginarias.\n");
            printf("Fin del programa\n");
        }
        
    }
    
    return 0;
}