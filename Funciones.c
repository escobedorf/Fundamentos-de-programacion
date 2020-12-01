#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char** argv) {

    float raiz,euler,loga,loga2,valor,bajo,arriba,potencia,residuo,seno,coseno,tangente;
    
    raiz= sqrt(900.0);
    printf ("La raiz cuadrada es: %.2f " ,raiz);
    
    euler= exp (2.0);
    printf ("\nEuler: %.2f " ,euler);
    
    loga= log (2.718282);
    printf ("\nLogaritmo natural: %.2f " ,loga);
    
    loga2 = log10 (10.0);
    printf ("\nLogaritmo: %.2f " ,loga2);
    
    valor = fabs (10.5);
    printf ("\nValor absoluto: %.2f " ,valor);
    
    bajo = ceil(9.2);
    printf ("\nRedondeo hacia abajo: %.2f " ,bajo);
    
    arriba = floor(9.2);
    printf ("\nRedondeo hacia arriba: %.2f " ,arriba);
    
    potencia = pow(7,2);
    printf ("\nElevado a la potencia: %.2f " ,potencia);
    
    residuo = fmod(13.657, 2.333);
    printf ("\nEl residuo es: %.2f " ,residuo);
    
    seno = sin(0.0);
    printf ("\nEl seno es: %.2f " ,seno);
     
    coseno = cos (0.0);
    printf ("\nEl coseno es: %.2f " ,coseno);
         
    tangente = tan (0.0);
    printf ("\nLa tengente es: %.2f " ,tangente);
     
    return (EXIT_SUCCESS);
}

