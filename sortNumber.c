  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char**argv)//usamos variables
{
	int i;
	
	//declaramos variables 
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	int c=atoi(argv[3]);
	int aux;
	
	
	
	aux=a;
	for(i=0;i<3;i++)//usamos el ciclo for
	
	{
		if(a>b)
		{
		aux=a;
		a=b;
		b=aux;
		}else if (b>c)//caso contrario
			{
			aux=b;
			b=c;
			c=aux;
			}
	}
printf("%d\n%d\n%d\n", a,b,c); //imprimir valores
return 0;

}
