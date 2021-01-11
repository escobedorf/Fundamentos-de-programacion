/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 03:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    int x,tabla[10];
    int sum,res,mul,div;
    
        printf("Digite 10 numeros\n"); 
        
            for (x=0;x<10;x++)
        {
        printf("Introduzca número: ");
        scanf("%d",&tabla[x]);
        }
           
        sum=tabla[0];
        res=tabla[0];
        mul=tabla[0];
        div=tabla[0];
           
            for (x=1;x<10;x++)
        {
        sum=sum+tabla[x];
        res=res-tabla[x];
        mul=mul*tabla[x];
        div=div/tabla[x];
        }
           
            printf("Suma: %d\n",sum);
            printf("Resta: %d\n",res);
            printf("Multiplicación: %d\n",mul);
            printf("División: %d\n",div);
           
    return (EXIT_SUCCESS);
}

