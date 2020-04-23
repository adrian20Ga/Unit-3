#include <stdio.h>

int main()
{
    int s, sl, a, b;
    b=0;
    printf("Cuantos numero va ingresar: \n");
    scanf("%d", &s);
    printf("ingrese los numeros: \n");
    for ( sl = 1; sl <= s; sl++)
    {
        scanf("%d", &a);
        if (a%2==0)
        {
            b=b+a;
        }
        
    }
    printf("La suma de los pares es: %d\n", b);
    return 0;
    
}