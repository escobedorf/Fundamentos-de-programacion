/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 06:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int a, b, c;
printf("Digite 3 numeros: \n");
scanf("%d%d%d", &a, &b, &c ) ;
printf("El mayor es: %d \n", mayor(a, b, c));
return 0 ;
}
int mayor(int x, int y, int z)
{
int max = x;
if (y > max)
max = y;
if (z > max)
max = z ;
return max;

    return (EXIT_SUCCESS);
}

