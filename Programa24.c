//Calcular el sueldo de un empleado que trabajó 50Hrs, a 15 pesos la hora.

#include <stdio.h>

int main(){

    int horas = 50, sueldo;

    printf("--Cada hora del trabajo realizado se remunera con 15 pesos mexicanos--\n");
    printf("--Usted trabajo 50 horas--\n");

    //Calculo del sueldo
    sueldo = horas * 15;

    printf("\nTu sueldo por haber trabajado %d horas, es de:  %d pesos mexicamos \n", horas, sueldo);

    return 0;
}