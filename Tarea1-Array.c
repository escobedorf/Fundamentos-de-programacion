#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int arreglo [100];
    int x=2;
    int y=3;
    int s;
        
    int i=0;
    while(i < 100){
        
        arreglo[i] = x;
        s = x + y;
        x = y;
        y = s;
                ++i;
    }           
        
        for(int i = 0; i<100; i++){
         printf("Posición %d [%d]\n ", i, arreglo[i]);            
        }
    return (EXIT_SUCCESS);
}

