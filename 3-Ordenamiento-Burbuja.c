#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int registro, contador, t=1,o=1;
    printf("¿Cuantos números desea ingresar? ");
    scanf("%d", &registro);
    
    int vector[registro];
    
    for (int i=0; i<registro; i++){
        printf("ingrese el valor: %d\n", t++);
        scanf ("%d",&vector[i]);
    }
    
    for (int i=0; i<registro; i++){
        for(int j=0; j<registro; j++){
        
            if (vector[j] > vector[j+1]){
                contador = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = contador;
            }
        }
    }
    printf ("Valores ordenados \n");
    for (int i=0; i<registro; i++){
        printf ("Orden %d: %d \n",o++,vector[i+1]);
    }
    return (EXIT_SUCCESS);
}


