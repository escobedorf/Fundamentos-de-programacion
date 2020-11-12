#include <stdio.h>
#include <stdlib.h>

//Francisco Javier Escbedo Ramos

int main(int argc, char** argv)
{
    int n1=6;
    int n2=20;
    int n3=100;

    if ( n1 >= n2 && n1 >= n3 ){
        printf( "\f %d es el mayor.", n1 );
    }else{

        if ( n2 > n3 ){
            printf( "\f %d es el mayor.", n2 );
        }else
            printf( "\f %d es el mayor.", n3 );
     }   
    return 0;
}

