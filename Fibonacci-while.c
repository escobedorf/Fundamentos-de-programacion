#include <stdio.h>
#include <stdlib.h>

 //Francisco Javier Escobedo Ramos 

int main(int argc, char** argv) {
    int a=0, b=1, c=a+b, e, cont;

    c = a+b;
    printf ("%d\n%d\n%d\n", a, b, c);
    printf("Cuantos elementos desea generar(mayor a 3): ");
    scanf("%d", &e);

    cont = 4;
    while(cont <= e)
    {
        a = b;
        b = c;
        c = a+b;
    printf ("%d\n", c);
    cont++;
    }          
    return (0);
}
