/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 6 de enero de 2021, 11:18 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v,raiz,euler,loga,loga2,valor,bajo,arriba,potencia,residuo,seno,coseno,tangente;
    int opcion;
    printf ("Calculadora de temperaturas");
    do
    {
        printf("\n--Seleccione la opcion deseada:\n");
        printf("1 - Calcular raíz cuadrada\n");
        printf("2 - Calcular función exponencial\n");
        printf("3 - Calcular logaritmo natural\n");
        printf("4 - Calcular logaritmo\n");
        printf("5 - Calcular valor absoluto\n");
        printf("6 - Redondea hacia abajo\n");
        printf("7 - Redondea hacia arriba\n");
        printf("8 - Elevar a la potencia \n");
        printf("9 - Calcular residuo\n");
        printf("10 - Calcular seno rigonométrico\n");
        printf("11 - Calcular coseno rigonométrico\n");
        printf("12 - Calcular tangente trigonométrica\n");
        printf("0 - Salir\n");

        do
        {
            printf( "\n   Introduzca un numero: ");
            scanf( "%d", &opcion );

        } while ( opcion < 0 || opcion > 12 );

        switch ( opcion )
        {
            case 1: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    raiz= sqrt(v);
                    printf ("La raiz cuadrada es: %.2f \n" ,raiz);
                    break;

            case 2: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    euler= exp (v);
                    printf ("\nEuler: %.2f \n\n" ,euler);
                    break;
                    
            case 3: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    loga= log (v);
                    printf ("\nLogaritmo natural: %.2f \n" ,loga);
                    break;
                    
            case 4: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    loga2 = log10 (v);
                    printf ("\nLogaritmo: %.2f \n" ,loga2);
                    break;

            case 5: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    valor = fabs (v);
                    printf ("\nValor absoluto: %.2f \n" ,valor);
                    break;

            case 6: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    bajo = ceil(v);
                    printf ("\nRedondeo hacia abajo: %.2f \n" ,bajo);
                    break;
                    
            case 7: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    arriba = floor(v);
                    printf ("\nRedondeo hacia arriba: %.2f \n" ,arriba);
                    break;
                    
            case 8: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    potencia = pow ((v),2);
                    printf ("\nElevado a la potencia: %.2f \n" ,potencia);
                    break;
                    
            case 9: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    residuo = fmod((v), 2.333);
                    printf ("\nEl residuo es: %.2f \n" ,residuo);
                    break;
                    
            case 10: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    seno = sin(v);
                    printf ("\nEl seno es: %.2f \n" ,seno);
                    break;
                    
            case 11: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    coseno = cos (v);
                    printf ("\nEl coseno es: %.2f \n" ,coseno);
                    break;
                    
            case 12: printf("Ingrese un numero: ");
                    scanf ("%f",&v);
                    tangente = tan (v);
                    printf ("\nLa tengente es: %.2f \n" ,tangente);
                    break;
         }

    } while ( opcion != 0 );

    return (EXIT_SUCCESS);
}


