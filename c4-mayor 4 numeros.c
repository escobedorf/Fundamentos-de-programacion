/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 30 de diciembre de 2020, 03:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n1=150;
    int n2=70;
    int n3=100;

    if ( n1 >= n2 && n1 >= n3 ){
        printf( "\n %d es el mayor.", n1 );
    }else{

        if ( n2 > n3 ){
            printf( "\f %d es el mayor.", n2 );
        }else
            printf( "\f %d es el mayor.", n3 );
     }   
    return (EXIT_SUCCESS);
}

