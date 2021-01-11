/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 03:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int Numero1=0;
    int Numero2=0;
    
    printf("\nTeclee No. 1 : ");
    scanf(" %d",&Numero1);
    printf("Teclee No. 2 : ");
    scanf(" %d",&Numero2);
    
    if (Numero1>Numero2) {
       printf("\nEl No.1 es mayor que el No. 2");
    } else if (Numero2>Numero1) {
       printf("\nEl No.2 es mayor que el No. 1");
    } else {
       printf("Son iguales");
    }
    
    return (EXIT_SUCCESS);
}

