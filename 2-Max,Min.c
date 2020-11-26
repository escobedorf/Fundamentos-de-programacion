#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int x=0;
    int n;
    printf ("¿Cuantos números desea ingresar? ");
    scanf ("%d",&n);
    
    float arreglo[n];
    
    for (x; x<n; x++){
        printf ("Ingrese el valor: ");
        scanf("%f",&arreglo[x]);
    } 
        x = 0;
        float menor = arreglo[0];
        float mayor = arreglo[0];
        for (x; x<n; x++){
            
            if (arreglo[x]<menor){
                menor = arreglo[x];
            }
            if (arreglo[x]>mayor){
                menor = arreglo[x];
            }    
        }
    printf("\nEl numero mayor es: %f", mayor);
    printf("\nEl numero menor es: %f", menor);
    return (EXIT_SUCCESS);
}


