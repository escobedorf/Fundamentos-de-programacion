# include  <stdio.h>
# include  <stdlib.h>

//Francisco Javier Escobedo Ramos 

int  main ( int argc, char ** argv) 
{
    int x = 1;
    int t = 1;
    int tope = 10;
    
    while (x<=tope){        
        printf("%d X %d = %d\n",x,t,x*t);
        t = t + 1;
        
        while (t >tope){
            t = 1;
            x = x + 1;
            printf("\n");
        }
    }
    return (0);
}

