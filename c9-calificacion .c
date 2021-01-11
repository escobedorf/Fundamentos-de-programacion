/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 06:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
float nota1, nota2, nota3, media;
printf("Ingrese cada nota del alumno en cada trimestre:\n");
printf("Nota 1:\n");

    scanf("%f", &nota1);
printf("Nota 2:\n");
    scanf("%f", &nota2);
printf("Nota 3:\n");
    scanf("%f", &nota3);

media=(nota1+nota2+nota3)/3;

if(media >= 5)

{
printf("El alumno ha aprobado con: %.2f",media); 
}

else
{

printf("El alumno ha reprobado con: %.2f", media);
}
    return (EXIT_SUCCESS);
}

