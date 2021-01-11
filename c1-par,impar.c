/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 30 de diciembre de 2020, 04:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int Num; 
    int Res;
    printf("Programa para determinar naturaleza par o impar de un numero\n\n");
    printf ("Introduzca un numero entero: ");
    scanf ("%d", &Num);
    Res = Num%2;
    if (Res==0) {
        printf ("El numero es par\n");
    } else {
        printf ("El numero es impar\n");
    }
    return (EXIT_SUCCESS);
}

