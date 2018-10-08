#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main (void)
{
     int A=0;
     int B=0;
     int C=0;
     int mayor = 0;
     
     printf("\n Este programa selecciona cual de los tres valores ingresados es el mayor ");
     
     printf("\n\n\nintroduce el valor A : ");
     scanf("%d",&A);
     printf("introduce el valor B : ");
     scanf("%d",&B);
     printf("introduce el valor c : ");
     scanf("%d",&C);
 
     if (A>B)
     {
             mayor = A;
     }
     else 
     {
             mayor = B;
     } 
        
     if (mayor < C)
     {
               mayor = C;
     }
     
     printf("\n\nEl numero mayor es: %d", mayor );
     
     getch ();
     return 0;
}

 
 
 
 
    
