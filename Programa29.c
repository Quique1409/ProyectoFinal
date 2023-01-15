//Pedir al usuario un numero y escribir la tabla de multiplicar de ese numero

#include <stdio.h>

int main(){

    //Declaramos variables
    int numero, limite, stacnum, tabla = 1;

    //Pedimos al usuario los valores
    printf("--Tablas de multiplicar--\n");
    printf("Ingresa el numero: \n");
    scanf("%d", &numero);

    //Calcular la tabla de multiplicar solicitada

    stacnum = numero;
    limite = numero * 10;

    while (numero <= limite)
    {
        printf("%d x %d = %d \n", stacnum, tabla, numero);

        tabla = tabla + 1;
        numero = numero + stacnum;
    }
    
    return 0;
}