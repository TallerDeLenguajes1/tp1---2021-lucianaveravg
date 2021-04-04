#include <stdio.h>
#include <string.h>

int fcuadrado (int *);
void fdcuadrado (int *);
void invertir (int *, int *); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden (int *,int *); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

int main (){

    int numero;
    int cuadrado;
    int a;
    int b;

    printf("Ingresar número: ");
    scanf("%d",&numero);

    cuadrado = fcuadrado(&numero);
    printf("Cuadrado del número: %d \n",cuadrado);

    printf("Dirección de la variable: %p \n",&numero);
    printf("Contenido de la variable: %d \n",numero);

    printf("Ingrese el primer valor: ");
    scanf("%d",&a);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&b);

    invertir(&a, &b);
    orden(&a, &b);
    return 0;
}

int fcuadrado (int *pnum){
    int cuadrado;

    cuadrado= *pnum * *pnum;
    return cuadrado;
}  

void fdcuadrado (int *pnum){
    int cuadrado;

    cuadrado= *pnum * *pnum;
}  

void invertir (int *puntA, int *puntB){
    int aux;

    aux = *puntA;
    *puntA = *puntB;
    *puntB = aux;

    printf("Primer valor invertido: %d \n",*puntA);
    printf("Segundo valor invertido: %d \n",*puntB);
return;
}

void orden (int *puntA,int *puntB){
    int aux;
    if (*puntA > *puntB){
        aux = *puntA;
        *puntA = *puntB;
        *puntB = aux;
        printf("Valores ordenados: %d %d \n", *puntA, *puntB);
    }else { 
        printf("Valores ordenados: %d %d \n", *puntA, *puntB);
    }
return;
}