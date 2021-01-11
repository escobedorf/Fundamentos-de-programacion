/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 08:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
	   int num,x,result;
	   printf("Introduce un número: ");
	   scanf("%d",&num);
	   for (x=0;x<=10;x++){
	      result=num*x;
	      printf("\n%d X %d = %d\n",num,x,result);
	   }

    return (EXIT_SUCCESS);
}

