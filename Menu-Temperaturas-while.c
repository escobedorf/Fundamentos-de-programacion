#include <math.h>
#include <stdio.h>

int main()
{
    float g;
    int opcion;
    printf ("Calculadora de temperaturas");
    do
    {
        printf ("\n   1. Calcular de grados Centígrados a grados Fahrenheit.");
        printf ("\n   2. Calcular de grados Fahrenheit a grados Centígrados.");
        printf ("\n   3. Calcular de grados Centígrados a grados Kelvin.");
        printf ("\n   4. Calcular de grados Fahrenheit a grados Kelvin.");
        printf ("\n   5. Calcular de grados Kelvin a grados Fahrenheit.");
        printf ("\n   6. Calcular de grados Kelvin a grados Centígrados.");
        printf ("\n   0. Salir.");

        do
        {
            printf( "\n   Introduzca un numero: ");
            scanf( "%d", &opcion );

        } while ( opcion < 0 || opcion > 6 );

        switch ( opcion )
        {
            case 1: printf( "\n   Introduzca los grados Centígrados: ");
                    scanf( "%f", &g );
                    printf( "\n   %f grados Centígrados equivale a %.2f grados Fahrenheit \n", g, g * 1.8 + 32 );
                    break;

            case 2: printf( "\n   Introduzca los grados Fahrenheit: ");
                    scanf( "%f", &g );
                    printf( "\n   %f grados Fahrenheit equivale a %.2f grados Centígrados \n", g, (g-32) * 5/9);
                    break;

            case 3: printf( "\n   Introduzca los grados Centígrados: ");
                    scanf( "%f", &g );
                    printf( "\n   %f grados Centígrados equivale a %.2f grados Kelvin \n", g, g + 273.15);
                    
            case 4: printf( "\n   Introduzca los grados Fahrenheit: ");
                    scanf( "%f", &g );
                    printf( "\n   %f grados Fahrenheit equivale a %.2f grados Kelvin \n", g, (g-32) * 5/9 + 273.15);
                    break;

            case 5: printf( "\n   Introduzca los grados Kelvin: ");
                    scanf( "%f", &g );
                    printf( "\n   %f grados Kelvin equivale a %.2f grados Fahrenheits \n", g, (g-273.15) * 9/5 + 32);
                    break;

            case 6: printf( "\n   Introduzca los grados Kelvin: ");
                    scanf( "%f", &g );
                    printf( "\n   %f grados Kelvin equivale a %.2f grados Centígrados \n", g, g - 273.15);        
         }

    } while ( opcion != 0 );

    return 0;
}
