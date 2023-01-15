//pedir dos numeros al usuario, el primero es el monto a pagar, el segundo es el monto entregado por el usuario.
// Imprimir el subtotal, el iva, el total y el cambio a entregar.

#include <stdio.h>

//Funcion IVA
float calcular_IVA(float MontoPagar)
{
    float IVA;
    //Calculos para el IVA

    IVA = (MontoPagar * 16) / 100;
    return IVA;

}

//Funcion principal
int main(){

    float MontoPagar, MontoEntregado, subtotal, total, cambio;

    printf("--Caja automatica--\n");
    //Monto a pagar
    printf("Ingresa el monto a pagar: $ ");
    scanf("%f", &MontoPagar);
    //Monto entregado por el cliente
    printf("\nIngresa el monto entregado: $ ");
    scanf("%f", &MontoEntregado);

    //Calcular los el subtotal de la compra

    subtotal = MontoPagar;

    //Calcular el subtotal con IVA incluido;

    total = subtotal + calcular_IVA(MontoPagar);

    //Calcular el cambio para entregar al cliente

    cambio = MontoEntregado - total;

    //Imprimir en pantalla los resultados

    printf("\nEl sutotal de su compra es: $ %.2f\n", subtotal);
    printf("\nTotal a pagar incluyendo el IVA: $ %.2f\n", total);
    printf("\nEl cambio a entregar es: $ %.2f", cambio);

    return 0;
}
