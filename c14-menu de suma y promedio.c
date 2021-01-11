/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de diciembre de 2020, 02:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void suma();
void promedio();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do{
        opc = 0;
        system("cmd /c cls");
        printf("\n--Seleccione la opcion deseada:\n");
        printf("1 - Suma de 10 numeros\n");
        printf("2 - Promedio de 10 numeros\n");
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
            suma();            
            break;
        }
        case 2 :{
            promedio();
            break;
        }

        default:{
            printf("caso defecto\n");
            break;
        }
    }   
}

void suma(){
    int x[10];
    int i,suma;
    printf ("\n Ingrese 10 números:\n");
    for (i=0;i<10;i++)
    scanf("%d",&x[i]);
    suma=0;
    for (i=0;i<10;i++)
    suma+=x[i];
    printf("El resultado de la suma es = %d \n ",suma);
    system("cmd /c pause");
}

void promedio(){
    int x[10];
    int i,suma;
    printf ("\n Ingrese 10 números:\n");
    for (i=0;i<10;i++)
    scanf("%d",&x[i]);
    suma=0;
    for (i=0;i<10;i++)
    suma+=x[i];
    printf("El resultado del promedio es = %d \n ",suma/10);
    system("cmd /c pause");
}

