#include "heapsort.h"

void flotar_hoja(int *array, int i) {
    if (i == 0) {
        return;
    }

    int padre = (i - 1) / 2;
    
    if (array[i] < array[padre]) {

        int aux = array[i];
        array[i] = array[padre];
        array[padre] = aux;

        flotar_hoja(array, padre);
    }
}

void array_a_heap(int *array, int n){
   
   for(int i = 0; i < n; i++){
        flotar_hoja(array, i);
   }

}

void borrar_raiz(int *heap, int n){

    heap[0] = heap[n-1];
    int aux = heap[0];

    for(int i = 0; i<n; i++){
        int izq = (2*i) + 1;
        int der = (2* i) + 2;
        if(heap[izq] > heap[der]){
            heap[0] = heap[izq];
            heap[izq] = aux;
        }
        else
            heap[0] = heap[der];
            heap[der] = aux;
    }

}

void heapsort(int *heap, int n, int *array_ord){
    
    for(int i = 0; i < n; i ++){
        array_ord[i] = heap[0];
        borrar_raiz(heap, n);
    }


}