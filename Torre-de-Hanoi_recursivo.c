/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 23 de enero de 2021, 07:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

void hanoi(int n,int com, int aux, int fin);
 
void main(void){
 

	char com='A';
	char aux='B';
	char fin='C';
	int n;
 
	printf("Numero de discos: ");
	scanf("%d",&n);
	fflush(stdin);
 
	printf("\n\nLos movimientos a realizar son: \n");
	hanoi(n,com,aux,fin);
}
 
void hanoi(int n,int com, int aux, int fin){
 
	if(n==1){
		printf("%c-->%c",com,fin);
	}
	else{
		hanoi(n-1,com,fin,aux);
		printf("\n%c-->%c\n",com,fin);
		hanoi(n-1,aux,com,fin);
	}
}

