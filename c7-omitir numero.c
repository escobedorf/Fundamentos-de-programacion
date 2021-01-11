/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 10:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int numero=1;
	   while(numero<=100)
	   {
	      if (numero==10)
	      {
		 numero++;
		 continue;
	      }
	   printf("%d\n",numero);
	   numero++;
	   }
    return (EXIT_SUCCESS);
}

