//Guarde la información de una perosna en un registro incluyendo nombre, edad, peso, dirección.

#include <stdio.h>
#include <string.h>
//Se crea el registro de persona
struct persona
    {
        char Nombre[40], Direccion[100];
        int Edad;
        float Peso;
    };

int main(){
    
    struct persona Persona;
    //Solicitar e imprimir los datos de la persona.

    printf("Ingresa tu nombre: \n");
    scanf("%s", Persona.Nombre);

    printf("Ingresa tu edad: \n");
    scanf("%d", &Persona.Edad);

    printf("Ingresa tu peso: \n");
    scanf("%f", &Persona.Peso);

    printf("Ingresa tu direccion ");
    scanf("%s", Persona.Direccion);

    //Imprimir los datos

    printf("Nombre: %s\n", Persona.Nombre);
    printf("Tu edad: %d\n",Persona.Edad);
    printf("Tu peso es: %.2f\n", Persona.Peso);
    printf("Tu direccion es: %s\n", Persona.Direccion);

    return 0;
}