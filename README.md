# Examen de Programación en C++

https://github.com/gdopa06/DoPark_GangMin_ExamenCPP.git

Estimado estudiante,

Para asegurar una evaluación justa de tus habilidades en programación en C++, sigue estas instrucciones al entregar tus respuestas.

## Instrucciones de Entrega
Repositorio en GitHub:

Crea un repositorio privado en GitHub para este examen y compártelo solo después de la revisión si así lo deseas.
Fichero ZIP:

Al finalizar, descarga tu repositorio como un archivo ZIP con el nombre Apellido_Nombre_ExamenCPP.zip.
Archivo README.md:

Incluye un archivo README.md en el repositorio, que contenga:
Un enlace directo al repositorio.
Una breve descripción de cada ejercicio resuelto y el archivo donde se encuentra.
Usa Markdown para estructurar tu README.
Entrega:

Sube el archivo ZIP a la plataforma indicada antes de la fecha límite.
Aspectos Adicionales:

Organiza y comenta tu código para que sea fácil de leer y entender.
Si utilizas referencias externas, inclúyelas en el README.md.

## Parte 2: Problemas de Codificación (70 puntos en total)

### Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
#### Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero".
Este ejercicio se encuentra en la Carpeta **Ejercicio1** del programa de este repositorio
Para este ejercicio, necesitamos que el usuario introduzca un número (que será nuestra variable) y con ella, saber si es positivo, negativo o si es cero.
Con este planteamiento, tenemos tres posibilidades (menor que 0, mayor que 0 o si el número es 0) que serán nuestras condiciones y utilizaremos la herramienta _if_.
Después de declarar nuestra función como _Numero_ en el archivo "numero.h", esta sería nuestra función que se encuentra en el archivo "numero.cpp"
```
#include "numero.h"

std::string Numero(int numero) {
    if (numero > 0) {
        return "El número es positivo.";
    } if (numero < 0) {
        return "El número es negativo.";
    } if (numero == 0) {
        return "El número es cero.";
    }
}
```


### Ejercicio 2: Día de la Semana
#### Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 
Este ejercicio se encuentra en la Carpeta **Ejercicio2** del programa de este repositorio

### Ejercicio 3: Cálculo de Promedio de Calificaciones
#### Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones.
Este ejercicio se encuentra en la Carpeta **Ejercicio3** del programa de este repositorio

### Ejercicio 4: Promoción de "3 por 2" en Tienda
#### En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.
Este ejercicio se encuentra en la Carpeta **Ejercicio4** del programa de este repositorio
