#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char** argv) {

    float v,raiz,euler,loga,loga2,valor,bajo,arriba,potencia,residuo,seno,coseno,tangente;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    
    raiz= sqrt(v);
    printf ("La raiz cuadrada es: %.2f " ,raiz);
    
    euler= exp (v);
    printf ("\nEuler: %.2f " ,euler);
    
    loga= log (v);
    printf ("\nLogaritmo natural: %.2f " ,loga);
    
    loga2 = log10 (v);
    printf ("\nLogaritmo: %.2f " ,loga2);
    
    valor = fabs (v);
    printf ("\nValor absoluto: %.2f " ,valor);
    
    bajo = ceil(v);
    printf ("\nRedondeo hacia abajo: %.2f " ,bajo);
    
    arriba = floor(v);
    printf ("\nRedondeo hacia arriba: %.2f " ,arriba);
    
    potencia = pow ((v),2);
    printf ("\nElevado a la potencia: %.2f " ,potencia);
    
    residuo = fmod((v), 2.333);
    printf ("\nEl residuo es: %.2f " ,residuo);
    
    seno = sin(v);
    printf ("\nEl seno es: %.2f " ,seno);
     
    coseno = cos (v);
    printf ("\nEl coseno es: %.2f " ,coseno);
         
    tangente = tan (v);
    printf ("\nLa tengente es: %.2f " ,tangente);
     
    return (EXIT_SUCCESS);
}

