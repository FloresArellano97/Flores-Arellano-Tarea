#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
    int A;
    int B =70;
    printf("Introduce el valor del dato A: ");
    scanf("%d",&A);
    if(A>=B)
    printf("Felicidades has aprobado");
    else
    printf("Continua con tus estudios, debes esforzarte mas");
    getch ();
    return 0;
}
