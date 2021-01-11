/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 03:20 PM
 */
#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void ascendente();
void descendente();
/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do{
        opc = 0;
        system("cmd /c cls");
        printf("\n--Seleccione la opcion deseada:\n");
        printf("1 - Numeros del 1 al 100 de manera ascendente\n");
        printf("2 - Numeros del 1 al 100 de manera descendente\n");
        printf("3 - Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opc);
        // verifica el opc
        verificar(opc);
    }
    while(opc != 3);
      
    return (EXIT_SUCCESS);
}

void verificar (int opc){
    switch (opc){
        case 1 :{
            ascendente();            
            break;
        }
        case 2 :{
            descendente();
            break;
        }

        default:{
            printf("Numero invalido\n");
            break;
        }
    }   
}

void ascendente(){
    int x,tabla[100]; 
        for (x=1;x<=100;x++)
        {
        tabla[x]=x;
    } 
        for (x=1;x<=100;x++)
        {
        printf("%d\n",tabla[x]);
    }
    system("cmd /c pause");
}

void descendente(){
    int x,tabla[100];
        for (x=1;x<=100;x++)
        {
        tabla[x]=x;
        }  
        for (x=100;x>=1;x--)
        {
        printf("%d\n",tabla[x]);
        }
    system("cmd /c pause");
}


