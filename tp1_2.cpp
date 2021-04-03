#include <stdio.h>
#include <string.h>

int fcuadrado (int num);

int main (){

    int numero;
    int cuadrado;

    printf("Ingresar número: ");
    scanf("%d",&numero);

    cuadrado = fcuadrado(numero);
    printf("Cuadrado del número: %d \n",cuadrado);

    return 0;
}

int fcuadrado (int num){
    int cuadrado;

    cuadrado = num * num;
    return cuadrado;
}