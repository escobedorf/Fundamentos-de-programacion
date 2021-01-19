/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funciones.h
 * Author: Francisco Escobedo
 *
 * Created on 18 de enero de 2021, 06:13 PM
 */

#ifndef FUNCIONES_H
#define	FUNCIONES_H

#ifdef	__cplusplus
extern "C" {
#endif

float PI= 3.1452;

int suma (int a, int b){
    return a+b;
}
int resta (int a, int b){
    return a-b;
}
char primer_caracter (char* cadena){
    return cadena [0];
}
double area_circulo(int radio){
    return PI*radio*radio;
}


#ifdef	__cplusplus
}
#endif

#endif