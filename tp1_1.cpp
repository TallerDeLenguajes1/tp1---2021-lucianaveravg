#include <stdio.h>
#include <string.h>

int main () {

char *p_char;
char variable;

scanf("%c",&variable);

p_char = &variable;

printf("Contenido del puntero: %c \n", *p_char);
/** printf("Direccion de memoria almacenada por el puntero);  **/
printf("Direccion de memoria de la variable: %p \n", &variable);
printf("Direccion de memoria del puntero: %p \n", p_char);
printf("Tamaño de memoria utilizado por la variable: %d \n", sizeof(variable));

}