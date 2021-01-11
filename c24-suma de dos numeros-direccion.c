/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 08:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   int a, b, c;

   int *p1, *p2, *p3; /*declaración de los punteros */

   printf("Ingrese el valor de a:\n");
   scanf("%d", &a);

   printf("Ahora el valor de b:\n");
   scanf("%d", &b);
   
   c=a+b;
   
   printf("a + b = %d\n ", c);
   p1=&a;
   p2=&b;
   printf("*p1 + *p2 = %d \n ", *p1+*p2);
   p3=&c;
   printf(" Dirección de a es %p\n Dirección de b es %p\n Y la de c es %p\n\n", p1, p2, p3);
    return (EXIT_SUCCESS);
}

