//Pedir al suario dos numeros, una operacion binaria y realizar la operacion con esos dos numeros

#include <stdio.h>

//Este es un programa de una calculadora basica de dos valores (suma, resta, multiplicación y division). Por el usuario
int main(){

    //Se declaran variables
    char opcion;
    float numero1, numero2, resultado;

    printf("Hola, este programa es una calculadora de operaciones basicas.\n");

    printf("Escoja una de las opciones:");
    //Opciones que tiene el usuario a realizar
    printf("\n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n");
    //El usuario indicara cual caso quiere
    scanf("%s", &opcion);

     //Solicitar dos valores al usuario
    printf("Ingresa el primer valor:  ");
    scanf("%f", &numero1);
    printf("Ingresa el segundo valor:  ");
    scanf("%f", &numero2);
    // Se va a crear un case para que el usuario escoga que quiere hacer de las 4 posibles operaciones.

    switch (opcion)
    {
        case '1':
            //Este caso realizara una suma entre dos valores ingresados por el usuario
            //Calcular la suma con los valores ingresados por el usuario
            resultado = numero1 + numero2;
            printf("El resultado de la suma es: %.2f", resultado);
            break;

        case '2':
            //Este caso realizara una resta entre dos valores ingresados por el usuario
            //Calcular la resta
            resultado = numero1 - numero2;
            printf("El resultado de la resta es:  %.2f", resultado);
            break;

        case '3':
            //El caso 3 realizara una multiplicacion con los valores ingresados por el usuario
            //Calcular la multiplicacion
            resultado = numero1 * numero2;
            printf("El resultado de la multiplicacion es: %.2f", resultado);
            break;

        case '4':
            //El caso 4 realizara una división con los dos valores ingresados por el usuario
            //Calcular la divison
            resultado = numero1 / numero2;
            printf("El resultado de la division es: %.2f", resultado);
            break;

        default:
            //En caso de que el usuario ingrese un numero de opción que no se (1,2,3,4), aparece un mensaje
            printf("Solo puedes ingresar una de las opciones propuestas :)");
            break;
    }
return 0;
}