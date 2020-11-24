#include<stdio.h>
int main(int argc, char *argv[]) 
{
    int mayor, menor;
    int n;
    int numero[n];
    
    printf("¿Cuantos números desea ingresar?  " );
        scanf("%i",&n);

    for(int i=0;i<n;i++){
            printf("numero[%i]: ",i);
            scanf("%i",&numero[i]);
    }    
    mayor = numero[0];
    for(int i = 1; i < n; ++i)
    {
        if(numero[i] > mayor){
            mayor = numero[i];
        }
        if(numero[i] < mayor){
            menor = numero[i];
        }
    }
    printf("El numero mayor es: %d \n", mayor);
    printf("El numero menor es: %d \n", menor);
    return 0;
}
