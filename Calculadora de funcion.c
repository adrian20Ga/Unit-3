//a�adimos las librerias principales
#include <stdio.h>
#include <math.h>

//Definici�n de mis funciones
int menu();
void leeOperadores(int *a,int *b);
int suma(int a, int b);
int resta(int a, int b);
void multiplicacion(int a, int b, float*resultado);
float division(int a, int b);
float potencia(int a, int b);
int factorial(int a);
int coeficientebinomial(int n, int k);
  
//funci�n del men�(main)
int menu(){
    int opcion;
    printf( "1.Suma\n"
            "2.Resta\n"
            "3.Multiplicacion\n"
            "4.Division\n"
            "5.Potencia\n"
            "6.Factorial\n"
            "7.Coeficiente Binomial\n"
            "0.Salir\n"
            "Elige una opcion:\n");
    scanf("%d",&opcion);
    return(opcion);
}
/*funci�n que lee los valores con los que voy a operar*/
void leeOperadores(int *a,int *b){
    printf("dame el valor de a:\n");
    scanf("%d",a); 
    printf("dame el valor de b:\n");
    scanf("%d",b);
}
//funci�n de suma
int suma(int a, int b){
    int suma;
    suma=a+b;
    return(suma);
}
//funci�n de resta
int resta(int a, int b){
    int resta;
    resta=a-b;
    return(resta);
}
//funci�n de multiplicaci�n
void multiplicacion(int a, int b, float *resultado){
    *resultado=a*b;
}
//funci�n para divisi�n
float division(int a, int b){
    float division;
    division=(float)a/b;
    return(division);
}
//la funci�n potencia
float potencia(int a, int b){
    float resultado;
    if(b==0){
        return(1);
    }
    resultado=(float)a*potencia(a,b-1);
    return(resultado);
}
//la funcion factorial
int factorial(int a){
    int resultado;
    if(a==1){
        return(1);
    }
    resultado=a*factorial(a-1);
    return(resultado);
}
//funci�n que calcula el coeficiente Binomial
int coeficientebinomial(int n, int k){
    int numerador=factorial(n);
    int denominador;
    denominador=k;
    return (numerador/denominador);
}
//esta es la funci�n principal
int main(void){
    //Definici�n de las variables jeje
    float resultado,d,p;
    int v,s,r,m,a,b,f,cb;
    v=menu(); //Asigno la opci�n que devuelve el men� para mi variable v
    
   
    while(v!=0){
        switch(v){
            case 1 :{
                leeOperadores(&a,&b); //Ejecuto la funcion que lee los operadores xd
                s=suma(a,b);
                printf("%d+%d=%d\n\n",a,b,s);
                v=menu();
            } 
            case 2 :{
                leeOperadores(&a,&b); 
                r=resta(a,b);
                printf("%d-%d=%d\n",a,b,r);
                v=menu();
            }
            case 3 :{
                leeOperadores(&a,&b); 
                multiplicacion(a,b,&resultado);
                printf("%d*%d=%f\n",a,b,resultado);
                v=menu();
            }
            case 4 :{
                leeOperadores(&a,&b); 
                d=division(a,b);
                printf("%d:%d=%f\n",a,b,d);
                v=menu();
            }
            case 5 :{
                leeOperadores(&a,&b);
                p=potencia(a,b);
                printf("%d^%d=%f\n",a,b,p);
                v=menu();      
            }
            case 6 :{
                printf("Introduce un valor:\n");
                scanf("%d",&a);
                f=factorial(a);
                printf("%d!=%d\n",a,f);
                v=menu();
            }
            case 7 :{
                leeOperadores(&a,&b);
                cb=coeficientebinomial(a,b);
                printf("%d\n\n",cb);
                v=menu();
            }
            default :
                printf("opcion mal\n");
                v=menu();
        }
    }
    printf("Hasta luego compa�ero:)!");
}
