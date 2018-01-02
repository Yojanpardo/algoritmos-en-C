# Curso profesional de algoritmos en C de platzi
En este repo vamos a encontrar diferentes archivos con los que iré practicando lo aprendido en el transcurso del curso y algunas notas personales.
## Que es un algoritmo?
Un algoritmo es un conjunto de instrucciones que resuelven un problema dado paso a paso sin generar ambigüedades.
## Lenguajes de programación
un lenguaje de programación es todo aquel que nos permite llevar nuestros algoritmos a las computadoras
### Lenguaje maquina
las maquinas trabajan con ceros y unos ya que trabajan con transistores que pueden tener cualquiera de estos estdos y todo esto se utiliza para dar resultado a las operaciones que se les dan, pero eso no es nada comprensible para nosotros los sers humanos. para poder hacer operaciones debemos mandarle datos en formas de ceros y unos pero eso no lo vamos a hacer
### Lenguaje ensamblador
el lenguaje ensamblador es un puente entre lo que nosotros podemos interpretar y lo que la maquina puede interpretar. el ensamblador fue un lenguaje muy popular y muy utilizado pero hoy en dia utilizamos ams que todo lenguajes de:
### Alto nivel
son lenguajes que son mas parecidos al inglés y que podemos utilizar para hacer aplicaciones web y esas cosas, estos lenguajes van a tener un traductor para llegar a la maquina.
### Bajo nivel
es un lenguaje que está muy cerca de lo que se interpreta directamente la maquina, en este caso va a trabajar mas de la mano con la maquina. como c assembler, etc.
### Elementos de un algoritmo
Tenemos numeros enteros (1,2,3,4,5), numeros flotantes, (1.1,2.53,3.14159268), numeros tipo long (on un numero muy largo(9587523842255546549613213287845313)), tipos de datos booleanos(True, False), numeros short(0-255), caracteres(a,@,g,t), todos estos datos deben almacenarce de alguna manera. constantes y variables.
tambien tenemos operadores y comparadores, estos para poder operar nuestras variables y contantes.
### Tipos de datos definidos por el usuario
podemos definir un tipo de dato propio que vayamos a usar en nuestro proyecto, en C se llamar struct. con esto podemos tener una mayor flexibilidad de nuestra aplicación y tambien nos permite tener un mejor uso de memoria.
### Estructuras de datos
Son una manera eficiente de organizar y almacenar nuestros datos, las mas comunes son listar, arreglos, matrices, arboles, etc.
### Tipos de datos abstractos
cuando se combina un dato dado por el usuario y uno dado por el programa y se le hace una operacion a este se genera un dato abstracto.
## Metodologia para hacer neustros algoritmos.
1. Definicon del problema
2. analisis del problema: desglozarlo en los problemas mas basicos
3. diseño del algoritmo
4. verificación o pruebas
#### necesitamos datos
* datos de entrada
* datos de salida
* tipos de datos
## Ayudas
### diagramas de flujo
son diagramas que nos ayudan a entender el flujo de datos de un algoritmo
### pseudocodigo
en un codigo escrito de forma muy legible para las personas y posteriormente ser traducido a un lenguaje de programación y compilado o interpretado por nuestras computadoras.
### por qué el analisis de algoritmos?
se generan analisis en tiempo de ejecucion que es encontrar la relacion entre la entrada y el tiempo que se demora en dar la salida.
### Como compara algoritmos?
el tiempo de ejecucion no es una buena referencia puesto que depende de donde se ejecute el programa.
numero de intrucciones ejecutadas: esto tampoco es una buena metrica porque no punto
Cual es la solucion ideal?
se tendrá en cuenta el tamaño de la entrada, el tiempo de ejecucion y el lenguaje de programación utilizado.
ahora debemos entender como se va a medir y se hace teniendo en cuenta el ritmo de crecimiento.
al momento de crear nuestro codigo debemos tener en cuenta las entradas mas grandes.
hay que tener en cuenta la tabla del ratio de crecimiento de los tiempos de ejecucion en algoritomos.

| Time Complexity |   Name             |
|-----------------|--------------------|
|        1        | Constant           |
|      logn       | Logarithmic        |
|        n        | Linear             |
|      nlogn      | Linear Logarithmic |
|        n²       | Quadratic          |
|        n³       | Cubic              |
|       2^n       | Exponential        |

## Estructuras de control y control general.
nos ayudan a definir y a dar orden a nuestro codigo, a hacer preguntas donde se deben hacer, repetir estructuras donde deb hacerse y repetir codigo donde debe hacerse, existen diferntes tipo de estructuras de control:
##### Secuenciales
simplemente se crea una serie de pasos y el programa ejecuta los pasos uno tras otro, se puede ver como un modelo de cascada y no genera estructuras de decision.
#### Selectivas
el lo mismo que la secuencial pero cuenta con estructuras de decisión tales como if.
#### Repetitivas
son ciclos tales como while, do while y for

## Introducción al lenguaje C
Fue creado por el señor Dennis Ritchie en 1972. fue una rebolucion ya que en esa epoca se usaba mucho el lenguaje ensamblador, pero el lenguaje c tenia la caracteristica de que era muchisimo mas legible para las personas y esto lo hacia mucho mas utilizable que el ensamblador.
en 1990 se estandarizó gracias al ANSI C
### Caracteristicas de C
* en nucleo del lenguaje trabaja con librerias por ejemplo las operaciones basicas de entrada y salida.
* es muy flexible y soporta la programación estructurada.
* puede tener acceso a la memoria de mas bajo nivel haciendo uso de los apuntadores.
* tiene un conjunto reducio de palabras reservadas.
* Pasaje de parametros por valor y referencia
### Compilando nuestro primer archivo en C
1. Vamos a abrir nuestro editor de texto favorito y vamos a guardar nuestro archivo con la extención .c
2. procedemos a importar la libreria estandar de entrada y salida
``` c
#include <stdio.h>//esta es una libreria estandar y se importa con <>
#include "MiLibreria.h"//esta es la forma de importar una libreria creada por mi y se importa con ""
```
3. podemos declarar variables y funciones globales.
4. para compilar nuestros proyectos lo hacemos en la terminal ejecutando el siguiente comando:
``` $ gcc -o [nombre-objetivo] [nombre de nuestro codigo]
```
5. eso nos da como resultado un ejecutable con el nombre que le dimos y ahora procedemos a ejecutarlo
```
$ ./[ejecutable]
```
### Tipos de errores en C
* sintácticos
* Errores de enlace
* De ejecución
* Semánticos
### tipos de datos
existen ciertos identificadores que se encargan de indentificar una variable, es decir que tipo de dato tienen.
no se pueden usar palabras reservadas para nombrar variables, tampoco numero ni caracteres especiales.
* char para caracteres como las letras
* int para caracteres numericos
* float para numeros decimales
* double para numero real de precision doble
### Variables en C
se les define un nombre para poder recuperar un valor y un tipo para restringir los valores que puede alamacenar
## operadores
* operadores de asignación
* operadores aritmeticos
* operadores relacionales
* operadores lógicos

| simbolo | nombre |
|---------|--------|
| = | Asignacion |
| += | Suma y asignación |
| -= | Resta y asignación |
| *= | Multiplicación y asignación |
| /= | División y asignación |
| + | Suma |
| - | Resta |
| * | multiplicación |
| / | división |
| % | Módulo |

| Operadores | Relacionales |
|------------------------|
| < | Menor que |
| > | Mayor que |
| <= | Menor igual que |
| >= | Mayor igual que |
| == | igual que |
| != | diferente de |

|operadores logicos|
|-------|------------|
|&&| conjuncion |
| las pipas | Disyunción |
| ! | negacion|

## Entrada y salida de datos
la salida de los datos por lo general va a ser visualizada por la pantalla y tambien puede ser redireccionada, es decir utilizada mas adelante para otras operaciones.
###codigo de formato
|%c|muestra un caracter|
|---------|------------|
|%d| muestra un numero entero|
|%x|muestra un numero entero exadecimal|
|%f|muestra un numero real|
|%X.Yf| muestra un numero real con X cifras enteras e Y cifras decimales|
|%s|Muestra una cadena de caracteres|

para escanear datos con el formato estandar utilizamos el siguiente codigo
``` c
#include <stdio.h>
void main(){
  [tipo de variable] [variable];
  scanf("[codigo de formato]", &[variable]);
}
```
## Estructuras Secuenciales if else
para verificar o generar una condicion utilizamos la palabra reservada "if"
```c
#include <stdio.h>

int a=1,b=2;

if(a<b){
  printf("efectivamente b es mayor que a");
}else{
  printf("efectivamente a es mayor que b");
}
```
y esta es basicamente la estructura de un if else.

#### Switch
es una herramienta de mala practica pero funciona para ciertos casos especificos, basicamente es un seleccionador.
