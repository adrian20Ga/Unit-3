#include <stdio.h>
int main() {

int i=0, final=30;
	int r=0;
	int c, n, fact = 1;
while(i<final) {
 	printf("Enter a number to calculate it's factorial\n");
	scanf("%d", &n);
	
	for (c = 1; c <= n; c++)
		fact = fact * c;
	
	printf("Factorial of %d = %d\n", n, fact);
	r=r+fact;
	i++;   
}
printf("the sum of the factorial numbers is = %d", r);
		return 0;
}
