/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 03:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int dia;
printf("Ingrese un numero del 1 al 7:\n");
    scanf("%d", &dia);
    
switch(dia) {
      case 1 :
         printf("Lunes\n" );
         break;
      case 2 :
         printf("Martes\n" );
         break;
      case 3 :
         printf("Miércoles\n" );
         break;
      case 4 :
         printf("Jueves\n" );
         break;
       case 5 :
         printf("Viernes\n" );
         break;
       case 6 :
         printf("Sabado\n" );
         break;
       case 7 :
         printf("Domingo\n" );
         break;
      default :
         printf("El número no está en el rango 1-7\n" );
   }
    return (EXIT_SUCCESS);
}

