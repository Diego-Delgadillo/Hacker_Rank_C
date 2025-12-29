#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    //ingresa cantidad de n elementos
    int n = 0, suma = 0;
    scanf("%d",&n);

    //creamos array dinámico
    int *array = (int*)  malloc(n * sizeof(int));

    //almacenamos en el array valores
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

    //recorre array y suma valor de cada posicion
    for(int i = 0; i < n;i++){
        suma += array[i];
    }

    printf("\n%d",suma);

    //libera memoria
    free(array);

    return 0;
}
