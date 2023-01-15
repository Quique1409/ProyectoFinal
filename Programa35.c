//Imprima los valores de este arreglo (programa anterior 34)

#include <stdio.h>


int main(){

    int arreglo[100];
    int i;

    //LLenar arreglo
    for (i = 200; i > 100; i--)
    {
        arreglo[i] = i;
        printf("%d, ", arreglo[i]);
    }
    
    return 0;
}