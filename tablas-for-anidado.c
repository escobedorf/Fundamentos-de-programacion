#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m;
    for (int i=1; i<11; i++){
        for (int j=1; j<11; j++){
        m = i * j;
        printf("%d X %d = %d\n",i,j,m);
        }
        printf ("\n");
        }
    return (EXIT_SUCCESS);
}
