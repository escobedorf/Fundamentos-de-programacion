/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 4 de enero de 2021, 08:21 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
void verificar(int);
void convDaP();
void convDaE();
void convPaD();
void convPaE();
void convEaP();
void convEaD();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
   
    do{
        opc = 0;
        system("cmd /c cls");
        printf("\n--Seleccione la opcion deseada:\n");
        printf("1 - Convertir Dolares a Pesos mexicanos\n");
        printf("2 - Convertir Dolares a Euros a K\n");
        printf("3 - Convertir Pesos mexicanos a Dolares\n");
        printf("4 - Convertir Pesos mexicanos a Euros\n");
        printf("5 - Convertir Euros a Pesos mexicanos\n");
        printf("6 - Convertir Euros a Dolares\n");
        printf("7 - Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opc);
        // verifica el opc
        verificar(opc);
    }
    while(opc != 7);
    
      
    return (EXIT_SUCCESS);
}

void verificar (int opc){
    switch (opc){
        case 1 :{
            convDaP();            
            break;
        }
        case 2 :{
            convDaE();
            break;
        }
        case 3 :{
            convPaD();
            break;
        }
        case 4 :{
            convPaE();
            break;
        }
        case 5 :{
            convEaP();
            break;
        }
        case 6 :{
            convEaD();
            break;
        }
            case 7 :{
            convEaD;
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }
      
}

void convDaP(){
    printf("\nIngrese la cantidad de dolares: ");
    float d = 0;
    scanf("%f",&d);
    float m = d * 19.85;
    printf("\n %f dolares son: %f pesos mexicanos aproximadamente\n",d,m);
    system("cmd /c pause");
}

void convDaE(){
    printf("\nIngrese la cantidad de dolares: ");
    float d = 0;
    scanf("%f",&d);
    float e = d * 0.8148;
    printf("\n %f dolares son: %f euros aproximadamente\n",d,e);
    system("cmd /c pause");
}

void convPaD(){
    printf("\nIngrese la cantidad de pesos mexicanos: ");
    float m = 0;
    scanf("%f",&m);
    float d = m*0.050;
    printf("\n %f pesos mexicanos son: %f dolares aproximadamente\n",m,d);
    system("cmd /c pause");
}

void convPaE(){
    printf("\nIngrese la cantidad de pesos mexicanos: ");
    float m = 0;
    scanf("%f",&m);
    float e = m*0.041;
    printf("\n %f pesos mexicanos son: %f euros aproximadamente\n",m,e);
    system("cmd /c pause");
}

void convEaP(){
    printf("\nIngrese la cantidad de euros: ");
    float e = 0;
    scanf("%f",&e);
    float m = e*24.35;
    printf("\n %f euros son: %f pesos mexicanos aproximadamente\n",e,m);
    system("cmd /c pause");
}

void convEaD(){
    printf("\nIngrese la cantidad de euros: ");
    float e = 0;
    scanf("%f",&e);
    float d = e*1.23;
    printf("\n %f euros son: %f dolares aproximadamente\n",e,d);
    system("cmd /c pause");
}


