#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char**argv){
	
	
	
	
	//declaramos variables con atoi(entero)
	int i;

	int num= atoi(argv[1])
	int nume= atoi(argv[2])
	for(i=num;i<=nume;i++){
	
		if(i%3==0&&i%5==0){

			printf("fizzbuzz\n");}//imprimir en cada ciclo 

		else if(i%3==0){
			printf("fizz\n");}//imprimir con la condicion prestablecida
		else if(i%5==0){
			printf("buzz\n");}//caso igual
		else{ 
			printf("%d\n",i);}
	}
return 0;
}
