//Pedir al usuario un mes y un dia, indicar su signo zodiacal.

#include <stdio.h>

int main(){

    int mes, dia, lista;

    //Cuerpo del programa
    printf("--Descubre cual es tu signo zodiacal--\n");

    //Dia de nacimiento
    printf("Ingresa tu dia de nacimiento: \n");
    scanf("%d", &dia);
    
    //meses
    printf("1. Enero\n");
    printf("2. Febrero\n");
    printf("3. Marzo\n");
    printf("4. Abril\n");
    printf("5. Mayo\n");
    printf("6. Junio\n");
    printf("7. Julio\n");
    printf("8. Agosto\n");
    printf("9. Septiembre\n");
    printf("10. Octubre\n");
    printf("11. Noviembre\n");
    printf("12. Deciembre\n");
    
    printf("Ingresa tu mes de nacimiento en numero: \n");
    scanf("%d", &mes);

    switch (mes)
    {
    //Caso 1, mes enero
    case 1:

        if (dia <= 19)
        {
            printf("Tu signo zodiacal es: Capricornio ");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Acuario");
        }
        break;

    //Caso 2, mes Febrero
    case 2:
        
        if (dia <= 18)
        {
            printf("Tu signo zodiacal es: Acuario.");
        }
        else if (dia <=28)
        {
            printf("Tu signo zodiacal es: Piscis.");
        }
        break;
    
    //Caso 3, mes Marzo
    case 3:
        
        if (dia <= 20)
        {
            printf("Tu signo zodiacal es: Piscis.");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Aries.");
        }
        break;
        
    //Caso 4, mes Abril
    case 4:

        if (dia <= 19)
        {
            printf("Tu signo zodiacal es: Aries.");
        }
        else if (dia <= 30)
        {
            printf("Tu signo zodiacal es: Tauro.");
        }
        break;

    //Caso 5, mes Mayo
    case 5:

        if (dia <= 20)
        {
            printf("Tu signo zodical es: Tauro.");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Geminis");
        }
        break;

    //Caso 6, mes junio
    case 6:

        if (dia <= 20)
        {
            printf("Tu signo zodiacal es: Geminis.");
        }
        else if (dia <= 30)
        {
            printf("Tu signo zodiacal es: Cancer.");
        }
        break;

    //Caso 7, mes Julio
    case 7:

        if (dia <= 22)
        {
            printf("Tu signo zodiacal es: Cancer.");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Leo.");
        }
        break;

    //Caso 8, mes Agosto
    case 8:

        if (dia <= 22)
        {
            printf("Tu signo zodiacal es: Leo.");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Virgo.");
        }
        break;

    //Caso 9, mes Septiembre
    case 9:

        if (dia <= 22)
        {
            printf("Tu signo zodiacal es: Virgo.");
        }
        else if (dia <= 30)
        {
            printf("Tu signo zodiacal es: Libra");
        }
        break;

    //Caso 10, mes Octubre
    case 10:

        if (dia <= 22)
        {
            printf("Tu signo zodiacal es: Libra.");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Escorpio.");
        }
        break;

    //Caso 11, mes Noviembre
    case 11:

        if (dia <= 21)
        {
            printf("Tu signo zodiacal es: Escorpio.");
        }
        else if (dia <= 30)
        {
            printf("Tu signo zodiacal es: Sagitario.");
        }
        break;

    //Caso 12, mes Diciembre
    case 12:

        if (dia <= 21)
        {
            printf("Tu signo zodiacal es: Sagitario.");
        }
        else if (dia <= 31)
        {
            printf("Tu signo zodiacal es: Capricornio.");
        }

    //En caso de no indicar un mes valido
    default:

        printf("Ingresa un mes valido entre el 1 al 12 (enero a diciembre)");
        break;
    }

    return 0;
}