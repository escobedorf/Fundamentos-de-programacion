#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int registro, aux, t=1;
    int conprobacion;

    printf("¿Cuantos números desea ingresar? ");
    scanf("%d", &registro);
    
    int vector[registro];
    for (int i=0; i<registro; i++){
        printf("Ingrese el valor: %d\n", t++);
        scanf ("%d",&vector[i]);
    }
    
    for (int i=1; i<registro; i++){
    conprobacion=0;
    
    for (int j=registro-1; j>=i; j--){
        if (vector[j-1]>vector[j]){
            aux=vector[j-1];
            vector[j-1]=vector[j];
            vector[j]=aux;
            conprobacion=1;
        }
    }
        if(conprobacion==0){
        break;
        }
    }
    printf ("Valores ordenados \n");
    for (int i=0; i<registro; i++){
    printf ("Orden: %d \n",vector[i]);
    }
    return (EXIT_SUCCESS);
}

