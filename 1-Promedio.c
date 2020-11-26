#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
float registro;
int contador;
float calif;
float suma = 0;
float promedio;
    printf("Cuantas calificaciones deseas introducir: " );
        scanf("%f", &registro);
for(contador=1; contador<=registro; contador++)
    {
    printf("Introduce la calificacion %d: ", contador);
        scanf("%f", &calif);
            suma = suma + calif;
    promedio = suma/registro;
    }
    printf("El promedio es igual a: %f", promedio);

    return (EXIT_SUCCESS);
}
