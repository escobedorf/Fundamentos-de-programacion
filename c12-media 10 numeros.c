/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 10:03 PM
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
float sum, numeros1[10];
int i;
printf("Calcular la media de 10 numeros\n");
    sum=0;
    for (i=0;i<10;i++){
        printf("Escriba un número: ");
        scanf("%f",&numeros1[i]);
    }
     
    for(i=0;i<10;i++)
  {
   sum=sum+numeros1[i];
  }
 
  printf("La media es: %f\n",sum/10);
    return (EXIT_SUCCESS);
}

