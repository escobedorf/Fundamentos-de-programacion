/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 11 de enero de 2021, 10:19 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int main(int argc, char** argv) {
char palabra[20];
    printf( "Teclea una palabra: " );
    scanf( "%s", palabra );
    printf( "La longitud de %s es %u\n", palabra, strlen( palabra ) );
    
    return (EXIT_SUCCESS);
}

