/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 07:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {

int array[10]={0,2,3,5,5,6,7,8,9,0}; 
int *puntero = &array[0];
int i;

for (i=0;i<10;i++)
printf("%d\n",*(puntero+i)); 

    return (EXIT_SUCCESS);
}

