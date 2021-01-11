/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 09:55 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a;
    int *p;
   printf("Ingrese un valor ENTERO para la variable:\n");
   scanf("%d", &a);
   while(a<0)

   {
       printf("ERROR, el valor debe ser mayor que cero:\n");
       scanf("%d", &a);
   }
   printf("a=%d\n", a);
   printf("La dirección de a es %p\n", &a);
   printf("*p=%p\n", p); 
   printf("a=%d\n", *p);
   printf("El tamaño de *p es %d\n", sizeof(p));
    return (EXIT_SUCCESS);
}

