/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 03:49 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
a. Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
b. Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
c. Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
d. Si lleva menos de 3 años se le aplica un aumento del 3%.
*/
int main(int argc, char** argv) {
    
    float importe, aumento;
    int antiguedad;
           
    importe=1000;
           
    printf("Introduzca la antigüedad del trabajador en años: ");
        scanf("%d",&antiguedad);
           
    if (antiguedad>=10)
    {
       aumento=importe*0.1;
    }
        else if (antiguedad<10 && antiguedad>=5)
        {
       aumento=importe*0.07;
        }
        else if (antiguedad<5 && antiguedad>=3)
            {
            aumento=importe*0.05;
            }
            else
                {
                    aumento=importe*0.03;
                }
    
    printf("\nEl sueldo que le corresponde al trabajador es de %f dolares\n",importe+aumento);
    
    return (EXIT_SUCCESS);
}

