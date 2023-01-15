//Practica para examen

#include <stdio.h>

int main(){

    FILE *archivo;

    //creamos el archivo con el nombre de miarchivo.txt
    archivo = fopen("miarchivo.txtx", "w");

    //Usamos la funcion fprintf para escribir sobre el archivo que abrimos
    fprintf(archivo, "\nHola estoy escribinedo en el archivo.");
    fprintf(archivo, "\nEste es el numero mas 1:");

    //colocamos un aviso que el archivo ha sido creado
    printf("Tu archivo ha sido creado.");
    printf("\n");

    //Cuando terminemos de manipular el archivo cerramos
    fclose(archivo);

    return 0;
}