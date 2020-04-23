#include <stdio.h> 
int main(){
	int num; 

	printf("Enter an integer you want to check: ");
	scanf("%d",&num);

	 /* Checking whether remainder is 0 or not. */
	if((num%2)==0) 
		printf("%d is not an odd number.",num); 
	else 
		printf("%d is an odd number.",num);
	return 0; 
}
