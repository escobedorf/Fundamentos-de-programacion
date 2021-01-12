/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 11 de enero de 2021, 10:14 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

	char nombre[] = { 'F', 'r', 'a', 'n', 'c', 'i', 's', 'c', 'o', '\0' };

	printf( "Texto: %s\n", nombre );
	printf( "Tamaño de la cadena: %i bytes\n", sizeof nombre );

    return (EXIT_SUCCESS);
}

