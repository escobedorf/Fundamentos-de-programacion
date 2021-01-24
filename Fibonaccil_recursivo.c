/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main0.c
 * Author: Francisco Escobedo
 *
 * Created on 23 de enero de 2021, 07:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void fibonacci(int penultimo, int ultimo, int n){
    int actual;
    printf("%d ", ultimo);
    if (n>1){
    actual = penultimo + ultimo;
    n--;
    fibonacci(ultimo, actual, n); 
    }
}
int main(int argc, char** argv) {
/* 
 n es la posicion que buscamos en este caso yo elegi
 4 y me dara las primeras 4 posiciones de fibonacci.
 */
    fibonacci(0, 1, 4);
    return (EXIT_SUCCESS);
}

