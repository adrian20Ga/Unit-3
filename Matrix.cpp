#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
int A11,A12,A13,A14,A21,A22,A23,A24,A31,A32,A33,A34,opc;
int B11,B12,B13,B14,B21,B22,B23,B24,B31,B32,B33,B34;
int C11,C12,C13,C14,C21,C22,C23,C24,C31,C32,C33,C34;

{
    printf("MATRIZ A:\n");
    printf("A11: "); scanf("%d",&A11);
    printf("A12: "); scanf("%d",&A12);
    printf("A13: "); scanf("%d",&A13);
    printf("A14: "); scanf("%d",&A14);
    
    printf("A21: "); scanf("%d",&A21);
    printf("A22: "); scanf("%d",&A22);
    printf("A23: "); scanf("%d",&A23);
    printf("A24: "); scanf("%d",&A24);
    
    printf("A31: "); scanf("%d",&A31);
    printf("A32: "); scanf("%d",&A32);
    printf("A33: "); scanf("%d",&A33);
     printf("A34: "); scanf("%d",&A34);
    system("CLS");

    printf("MATRIZ B:\n");
    printf("B11: "); scanf("%d",&B11);
    printf("B12: "); scanf("%d",&B12);
    printf("B13: "); scanf("%d",&B13);
    printf("B14: "); scanf("%d",&B14);
    
    printf("B21: "); scanf("%d",&B21);
    printf("B22: "); scanf("%d",&B22);
    printf("B23: "); scanf("%d",&B23);
    printf("B24: "); scanf("%d",&B24);
    
    printf("B31: "); scanf("%d",&B31);
    printf("B32: "); scanf("%d",&B32);
    printf("B33: "); scanf("%d",&B33);
    printf("B34: "); scanf("%d",&B34);
    
    system("CLS");
    C11=A11+B11; C12=A12+B12; C13=A13+B13; C14=A14+B14;
    C21=A21+B21; C22=A22+B22; C23=A23+B23; C24=A24+B24;
    C31=A31+B31; C32=A32+B32; C33=A33+B33; C34=A34+B34;
    printf("RESULTADO:\n");
    printf("[ %d,%d,%d,%d]\n",C11,C12,C13,C14);
    printf("[ %d,%d,%d,%d]\n",C21,C22,C23,C24);
    printf("[ %d,%d,%d,%d]\n",C31,C32,C33,C34);
    return 0;
    }
}
