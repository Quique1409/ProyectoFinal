//Imprima los valores de este arreglo en orden inverso

#include <stdio.h>


int main(){

    int arreglo[100];
    int i;

    //LLenar arreglo
    for (i = 101; i < 201; i++)
    {
        arreglo[i] = i;
        printf("%d, ", arreglo[i]);
    }
    
    return 0;
}