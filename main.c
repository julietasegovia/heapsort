#include <stdio.h>
#include "heapsort.h"

int main(){

    int array[6];

    for(int i = 0; i<6; i++){
        printf("\nIngrese un elemento: ");
        scanf("%i", &array[i]);
    }

    array_a_heap(array, 6);

    int *array_ordenado;

    //heapsort(array, 6, array_ordenado);

    for(int i = 0; i<6; i++){
        printf("%i, ", array[i]);
    }

    return 0;
}