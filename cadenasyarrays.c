/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 11 de enero de 2021, 09:52 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
char cadena1[4];
        cadena1[0]='h'; 
        cadena1[1]='o'; 
        cadena1[2]='l'; 
        cadena1[3]='a';
        
printf("La palabra en la variable es: %c%c%c%c \n", cadena1[0],cadena1[1],cadena1[2],cadena1[3]);
    return (EXIT_SUCCESS);
}

