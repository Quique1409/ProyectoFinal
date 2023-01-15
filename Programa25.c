//Imprimir la tabla del 7

#include <stdio.h>

int main(){

    int i = 7, a = 1;

    printf("Esta es la tabla del 7: \n");

    while (i <= 70)
    {
        printf(" 7 x %d: %d\n", a,i);

        a = a + 1;
        i = i + 7;
    }
    
    return 0;
}