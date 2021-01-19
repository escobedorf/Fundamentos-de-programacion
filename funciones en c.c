/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 18 de enero de 2021, 06:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main() {

    int a=3, b=2, c;
    float area = 0;
    char inicial; 
    
    c=suma(a,b);
    printf("c: %d\n",c);
    c=resta(a,b);
    printf("c: %d\n",c);
    
    area=area_circulo(2);
    printf("area: %f\n", area);
    
    inicial=primer_caracter("politecnico");
    printf("primer caracter: %c", inicial);
    
    return 0;
}
