/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Francisco Escobedo
 *
 * Created on 5 de enero de 2021, 06:38 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void verificar(int);
void raiz();
void euler();
void loga();
void loga2();
void valor();
void bajo();
void arriba();
void potencia();
void residuo();
void seno();
void coseno();
void tangente();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do{
        opc = 0;
        system("cmd /c cls");
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
        printf("13 - Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opc);
        // verifica el opc
        verificar(opc);
    }
    while(opc != 13);
      
    return (EXIT_SUCCESS);
}

void verificar (int opc){
    switch (opc){
        case 1 :{
            raiz();
            break;
        }
        case 2 :{
            euler();
            break;
        }
        case 3 :{
            loga();           
            break;
        }
        case 4 :{
            loga2();
            break;
        }
        case 5 :{
            valor();            
            break;
        }
        case 6 :{
            bajo();
            break;
        }
        case 7 :{
            arriba();            
            break;
        }
        case 8 :{
            potencia();
            break;
        }
        case 9 :{
            residuo();            
            break;
        }
        case 10 :{
            seno();
            break;
        }
        case 11 :{
            coseno();            
            break;
        }
        case 12 :{
            tangente();
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }   
}

void raiz(){
    float v,raiz;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    raiz= sqrt(v);
    printf ("La raiz cuadrada es: %.2f " ,raiz);
    
    system("cmd /c pause");
}
void euler(){
    float v,euler;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    euler= exp (v);
    printf ("\nEuler: %.2f " ,euler);
    
    system("cmd /c pause");
}
void loga(){
    float v,loga;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    loga= log (v);
    printf ("\nLogaritmo natural: %.2f " ,loga);
    
    system("cmd /c pause");
}
void loga2(){
    float v,loga2;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    loga2 = log10 (v);
    printf ("\nLogaritmo: %.2f " ,loga2);
    
    system("cmd /c pause");
}
void valor(){
    float v,valor;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    valor = fabs (v);
    printf ("\nValor absoluto: %.2f " ,valor);
    
    system("cmd /c pause");
}
void bajo(){
    float v,bajo;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    bajo = ceil(v);
    printf ("\nRedondeo hacia abajo: %.2f " ,bajo);
    
    system("cmd /c pause");
}
void arriba(){
    float v,arriba;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    arriba = floor(v);
    printf ("\nRedondeo hacia arriba: %.2f " ,arriba);
    
    system("cmd /c pause");
}
void potencia(){
    float v,potencia;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    potencia = pow ((v),2);
    printf ("\nElevado a la potencia: %.2f " ,potencia);
    
    system("cmd /c pause");
}
void residuo(){
    float v,residuo;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    residuo = fmod((v), 2.333);
    printf ("\nEl residuo es: %.2f " ,residuo);
    
    system("cmd /c pause");
}
void seno(){
    float v,seno;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    seno = sin(v);
    printf ("\nEl seno es: %.2f " ,seno);
    
    system("cmd /c pause");
}
void coseno(){
    float v,coseno;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    coseno = cos (v);
    printf ("\nEl coseno es: %.2f " ,coseno);
    
    system("cmd /c pause");
}
void tangente(){
    float v,tangente;
    
    printf("Ingrese un numero: ");
    scanf ("%f",&v);
    tangente = tan (v);
    printf ("\nLa tengente es: %.2f " ,tangente);
    
    system("cmd /c pause");
}
