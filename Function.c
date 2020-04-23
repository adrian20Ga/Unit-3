#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//se usa funcion y parametros
int add_two_int(int x1, int x2)
{
	return x1 +x2;

}


int main(int argc, char** argv)//usamos funcion principal
{
	//declaramos variables
	int i;
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	for(i=0; i<num2; i++){
	printf("argv[%d] is %s \n", i, argv[i]);
	}
	printf("%d\n", num1);
	return (0);
}
