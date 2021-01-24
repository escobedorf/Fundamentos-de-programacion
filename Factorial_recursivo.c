/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 23 de enero de 2021, 06:47 PM
 */
#include <stdio.h>
#include <stdlib.h>


double factorial(int n);
void main()
{
  int numero;
  printf("\n Introduce un número entero: ");
  scanf("%d", &numero);
  printf("\n El factorial de %d es: %f", numero, factorial(numero));
}

double factorial (int numero)
{
  if (numero <= 1) 
    return 1;
  else 
    return numero * factorial (numero - 1);
}

