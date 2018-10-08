#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int modulo,num;
	
	printf("Introduce el numero: ");
	scanf("%d",&num);
	
	modulo=num%2;
	
	if(modulo==0)
	{
		printf("\n el numero es par");
	}
	else
	{
		printf("\n el numero es impar");
	}
	
	getch();
	return 0;

}
