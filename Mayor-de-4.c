#include <stdio.h>
#include <stdlib.h>

//Francisco Javier Escobedo Ramos 

int main(int argc, char** argv) {

    int n1=6;
    int n2=1120;
    int n3=100;
    int n4=150;

    if ( n1 >= n2 && n1 >= n3 && n1 >= n4){
        printf( "\f %d es el mayor.", n1 );
        }else{
    if ( n2 >= n1 && n2 >= n3 && n2 >= n4){
            printf( "\f %d es el mayor.", n2 );
        }else{
    if ( n3 >= n1 && n3 >= n2 && n3 >= n4){
            printf( "\f %d es el mayor.", n3 );
        }
            printf( "\f %d es el mayor.", n4 );
     } 
    }
    return 0;
}

