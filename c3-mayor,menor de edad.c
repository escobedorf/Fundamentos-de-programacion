/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 26 de diciembre de 2020, 03:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int edad;
    printf("Escribe tu edad: \n");
    scanf("%d", &edad);
    if (edad >= 18){
        printf("Mayor de edad");
    }else{
        printf("Menor de edad");
    }
      return (EXIT_SUCCESS);  
}

