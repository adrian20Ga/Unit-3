#include <stdio.h>
int main()
{
    int a;
    printf("Ingresa anio\n");
      scanf("%d",&a);
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
     printf("El anio %d Si es bisiesto ",a);
     }else{
     printf("El anio %d No es bisiesto ",a);
     }
    return 0;
}
