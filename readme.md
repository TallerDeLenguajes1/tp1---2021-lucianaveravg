# Trabajo Práctico N°1

## Archivos .gitignore

Es conveniente incluirlos porque los archivos _.gitignore_ sirven para "decirle" a Git qué archivos o directorios debe ignorar y no subir al repositorio, ayudándonos a sólo tomar en cuenta y subir los archivos necesarios. Ésto también nos ayuda a que el peso total de un proyecto sea mucho menor.

Además, son muy sencillos de usar y crear, lo único que se debe hacer es crear un archivo .gitignore especificando (escribiendo en él) qué elementos queremos ignorar.

## Gitignore.io

[gitignore.io](https://www.toptal.com/developers/gitignore "gitignore.io") es una página web diseñada para ayudar a crear archivos .gitignore para los repositorios Git.

La página se usa escribiendo en la barra el tipo de archivos que se desea ignorar. En este caso, quiero ignorar los archivos ejecutables y los de
Objetive-C, por los archivos ejecutable y  *.dYSM* que se crean al compilar el programa.

## Punto  2

Los resultados de los puntos b) y c) son iguales porque al inicializar el puntero, le asigno como valor la dirección de memoria de la variable. El punto c), en cambio, no es igual a los anteriores porque la dirección de memoria almacenada en un puntero **no** es lo mismo que la dirección de memoria de un puntero. 

Un puntero es una variable como cualquiera, con su propia dirección de memoria. El valor de un puntero (lo que almacena) es la dirección de memoria de la variable a la que está señalando, no el valor de la variable.