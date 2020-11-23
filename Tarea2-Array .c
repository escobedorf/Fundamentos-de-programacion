#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x; 
    printf("Ingrese un valor:  ");
    scanf("%d", &x);
    
    int arreglo [x];
    
    for(int i=0; i<x; i++){
        printf("Ingrese el valor %d \n", i+1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("Los valores del arreglo son: \n");
    for(int i = 0; i < x; i++){
        printf("Posición del arreglo %d [%d] \n", i, arreglo[i]);
    }
    return (EXIT_SUCCESS);
}

