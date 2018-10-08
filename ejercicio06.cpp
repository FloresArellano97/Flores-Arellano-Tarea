#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int cobro,cobro2,factura,agua,le,lg;
	printf("Introduce el total de litros de agua gastados en un mes: ");
	scanf("%d",&agua);
	if(agua<=50)
    {
      	printf("\nSu gasto de agua no fue mayor a 50 litros en este mes, pero debe pagar una cuota al gobierno, su factura es de 150 pesos mexicanos");
	}
	if(agua>50 & agua<=200)
	{
	
		lg=50;	
	
		agua=agua-lg;
		factura= agua*3;
      	printf("\nEl total a pagar de litros agua es de: %d pesos mexicanos",factura);
	}
	if(agua>200)
	{
		
		lg=50;
		
		le=agua%200;
		agua=agua-lg-le;
		cobro= agua*3;
	
		cobro2= le*5;
	    factura=cobro2*cobro;
		printf("\nEl total a pagar de litros agua es de: %d pesos mexicanos",factura);
	}

	
	getch();
	return 0;
}
