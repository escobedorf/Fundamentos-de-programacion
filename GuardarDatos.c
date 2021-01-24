/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 18 de enero de 2021, 09:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num[3];
    int i;
    double media;

    for(i=0; i<3; i++){
        printf("Introduzca un numero: ");
        scanf("%d", &num[i]);
    }

    media = (num[0]+num[1]+num[2])/3.0;

    FILE*fichero;
    fichero = fopen("datos.txt","wt");
    fprintf(fichero, "%d\n", num[0]);
    fprintf(fichero, "%d\n",num[1]);
    fprintf(fichero, "%d\n",num[2]);
    fprintf(fichero, "%lf",media);
    fclose(fichero);

    printf("Proceso completo");

}

