  
#include <stdlib.h>
#include <stdio.h>




int main(int argc, char ** argv) //usamos argumentos
{
    int op = argc / 2;
    
    //variables
    int num1;
    int num2=1;
    if (argc >=7) //condicional
    {
        printf("wacht out ur argument\n");//warning
    } else 
        {
        float x[3];
        float y[3];
        float z[3];
        for (num1 = 0; num1 < op; num1++) 
        {
            x[num1] = atof(argv[num1+num2]);
            y[num1] = atof(argv[op+num1+num2]);
        }
        z[0] = (x[1] * y[2]) - (x[2] * y[1]);
        z[1] = (x[2] * y[0]) - (x[0] * y[2]);
        z[2] = (x[0] * y[1]) - (x[1] * y[0]);
        printf("the new vector has components x = %.2f, y = %.2f and z = %.2f\n", z[0], z[1], z[2]);
        }
    return 0;
}
