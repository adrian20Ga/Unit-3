#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int main(int argc,char**argv)



{
		int i;
		int j;
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
		int total=0;
		int aux;
		for(i=a;i<b;i++)
	
	{
	
	
	
	     total=0;
	     	for(j=a;j<b;j++)
	    	{
	    	if(i%j==0)
	        	{
	         	total+=j;
	            	aux=total/2;
	              	}
	             	}
	                 	if (aux==i){
	                 	printf("%d\n",total);
	                    	}
                             	}
return 0;
}
