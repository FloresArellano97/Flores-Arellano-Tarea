#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (void)
{
    int A=0;
    int B=0;
    int resultado=0;
    
    printf("\n Este programa te dice si es un numero par o impar \n Y te muestra un cuadrado si es par \n y un cubo si es impar ");
    
    printf("\n\n Introduce el valor de A: ");
    scanf("%d",&A);
    
    B=A%2;
    
    if(B==0)
    {
            printf("\n El numero es par "); 
            resultado = A*A;
            printf("\n El cuadrado de tu numero es: %d", resultado);
    }    
    
    else
 
   {
        printf("\n El numero es impar");
        resultado = A*A*A;
        printf("\n El cubo de tu numero es: %d", resultado);    
   }
   
   getch ();
   return 0;
}
             
