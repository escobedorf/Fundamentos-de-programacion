/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 08:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero;
 
    printf("Teclea un número (0 para salir): ");
        scanf("%d", &numero);
        
    while (numero!=0)
  {
    if (numero > 0) printf("Es positivo\n");
      else printf("Es negativo\n");
        printf("Teclea otro número (0 para salir): ");
            scanf("%d", &numero);
  }

    return (EXIT_SUCCESS);
}

