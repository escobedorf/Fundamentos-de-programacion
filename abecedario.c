/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 13 de enero de 2021, 10:55 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {
    
    char frase[50];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0, r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    int contador=0;
    printf("Introduzca una frase: ");
    gets(frase);
    
    for (contador=0; contador<50; contador++){
            switch (frase[contador]){
                case 'a':  
                    a++; 
                    break;
                case 'b': 
                    c++; 
                    break;
                case 'd': 
                    d++; 
                    break;
                case 'e': 
                    e++; 
                    break;
                case 'f': 
                    f++; 
                    break;
                case 'g': 
                    g++; 
                    break;
                case 'h': 
                    h++; 
                    break;
                case 'i': 
                    i++; 
                    break;
                case 'j': 
                    j++; 
                    break;
                case 'k': 
                    k++; 
                    break;
                case 'l': 
                    l++; 
                    break;
                case 'm': 
                    m++; 
                    break;
                case 'n': 
                    n++; 
                    break;
                case 'o': 
                    o++; 
                    break;
                case 'p': 
                    p++; 
                    break;
                case 'q': 
                    q++; 
                    break;
                case 'r': 
                    r++; 
                    break;
                case 's': 
                    s++; 
                    break;
                case 't': 
                    t++; 
                    break;
                case 'u': 
                    u++; 
                    break;
                case 'v': 
                    v++; 
                    break;
                case 'w': 
                    w++; 
                    break;
                case 'x': 
                    x++; 
                    break;
                case 'y': 
                    y++; 
                    break;
                case 'z': 
                    z++; 
                    break;
            }
    }
    
    printf("\nA = %d ", a);
    printf("\nB = %d ", b);
    printf("\nC = %d ", c);
    printf("\nD = %d ", d);
    printf("\nE = %d ", e);
    printf("\nF = %d ", f);
    printf("\nG = %d ", g);
    printf("\nH = %d ", h);
    printf("\nI = %d ", i);
    printf("\nJ = %d ", j);
    printf("\nK = %d ", k);
    printf("\nL = %d ", l);
    printf("\nM = %d ", m);
    printf("\nN = %d ", n);
    printf("\nO = %d ", o);
    printf("\nP = %d ", p);
    printf("\nQ = %d ", q);
    printf("\nR = %d ", r);
    printf("\nS = %d ", s);
    printf("\nT = %d ", t);
    printf("\nU = %d ", u);
    printf("\nV = %d ", v);
    printf("\nW = %d ", w);
    printf("\nX = %d ", x);
    printf("\nY = %d ", y);
    printf("\nZ = %d ", z);
   
    return (EXIT_SUCCESS);
}