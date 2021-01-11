/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 07:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int buscar(int x,int k){
int i,n;
if (k<=0 || x<0) return -1;
for (i=0;i<k-1;i++);
x=x/10;
return (x%10);
}
void main(){
int n,k,digito;
printf("Ingrese numero y posicion:");
scanf("%d %d",&n,&k);
digito=buscar(n,k);
if (digito<0) printf("No encontrado\n");
else printf("El digito encontrado es: %d\n",digito);
    return (EXIT_SUCCESS);
}

