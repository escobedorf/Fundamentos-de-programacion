#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int contador;
float registro, calif, suma = 0, promedio ;
    printf("¿Cuantas calificaciones deseas introducir? " );
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
