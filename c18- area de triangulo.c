/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 06:26 PM
 */

#include<stdio.h> 
int areaTriangulo(int base, int altura); 
int main(){ 
    printf("Area de un triangulo\n"); 
    int b, a; 
    printf("Base: "); 
    scanf("%d", &b); 
    printf("Altura: "); 
    scanf("%d", &a); 
    printf("Área: %d", areaTriangulo(b, a)); 
} 
int areaTriangulo(int base, int altura) 
{ return base*altura/2; }
