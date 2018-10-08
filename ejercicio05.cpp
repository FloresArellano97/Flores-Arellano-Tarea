#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void)
{
    int restante=0;
    int A=0;
    int BM=0;
    int BQ=0;
    int BD=0;
    int BC=0;
    int BCT=0;
    int BV=0;
    int MD=0;
    int MC=0;
    int MP=0;
    
    printf("Este programa desglosa una cantidad dada en moneda nacional Mexicana");
    
    printf("\n\n Introduce la cantidad : ");
    scanf("%d",&A);
    
    if(A>=1000)
    {
               BM=A / 1000;
               printf("Tienes %d",BM);
               printf(" billetes de 1000");
               restante=A-(BM*1000);
    }
    else
    {
        restante = A;
        }
        

    
         if(A>=500)
        {
                  BQ=restante / 500;
                   printf("\nTienes %d",BQ);
                   printf(" billetes de 500"); 
                  restante=restante-(BQ*500);
        }
          if(A>=200)
        {
                    BD=restante / 200;
                    printf("\nTienes %d",BD);
                    printf(" billetes de 200");
                    restante=restante-(BD*200);
        }
           if(A>=100)
        {
                     BC=restante / 100;
                    printf("\nTienes %d",BC);
                    printf(" billetes de 100");
                    restante=restante-(BC*100);
        }
            if(A>=50)
        {
                     BCT=restante / 50;
                    printf("\nTienes %d",BCT);
                    printf(" billetes de 50");
                    restante=restante-(BCT*50);
        }
             if(A>=20)
        {
             BV=restante / 20;
                    printf("\nTienes %d",BV);
                    printf(" billetes de 20");
                    restante=restante-(BV*20);
        }
              if(A>=10)
        {
                    MD=restante / 10;
                    printf("\nTienes %d",MD);
                    printf(" monedas de 10");
                    restante=restante-(MD*10);
        }
               if(A>=5)
        {
                    MC=restante / 5;
                    printf("\nTienes %d",MC);
                    printf(" monedas de 5");
                    restante=restante-(MC*5);
        }
                if(A>=2)
        {
                    MD=restante / 2;
                    printf("\nTienes %d",MD);
                    printf(" monedas de 2");
                    restante=restante-(MD*2);
        }
                 if(A>=1)
        {
                    MP=restante / 1;
                    printf("\nTienes %d",MP);
                    printf(" monedas de 1");
                    restante=restante-(MP*1);
    }
            
         
                
    
    
    getch ();
    return 0;
}
    
    
    
