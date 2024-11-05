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
Después de declarar nuestra función como _Numero_ en el archivo "numero.h", esta sería nuestra función que se encuentra en el archivo "numero.cpp":
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

En nuestro archivo main.cpp, llamamos nuestra funcion para que nos diga si el número es positivo, negativo o si es cero.

### Ejercicio 2: Día de la Semana
#### Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 
Este ejercicio se encuentra en la Carpeta **Ejercicio2** del programa de este repositorio.

Necesitamos que el usuario introduzca un número del 1 al 7 (que será nuestra variable) y con ella, saber a qué día de la semana corresponde ese número.
Con este planteamiento, tenemos tres posibilidades (menor que 0, mayor que 0 o si el número es 0) que serán nuestras condiciones y utilizaremos la herramienta _switch_ ya que con las 7 posibilidades que tenemos (del 1 al 7), identificará el número con su respectivo día. En caso de que no ponga un número del 1 al 7, reconocerá automaticamente (en la sección _default_ de la función) el valor introducido como un número no valido, ya que solo tiene asignado los números del 1 al 7.
Después de declarar nuestra función como _DiaSemana_ en el archivo "DiaSemana.h", esta sería nuestra función que se encuentra en el archivo "DiaSemana.cpp":
```
#include "DiaSemana.h"

std::string DiaSemana(int numero) {
    switch (numero) {
        case 1:
            return "Lunes";
        case 2:
            return "Martes";
        case 3:
            return "Miércoles";
        case 4:
            return "Jueves";
        case 5:
            return "Viernes";
        case 6:
            return "Sábado";
        case 7:
            return "Domingo";
        default:
            return "Número inválido. Por favor, ingresa un número del 1 al 7.";
    }
}

```
En nuestro archivo "main.cpp", llamamos nuestra funcion para que el usuario introduzca un número del 1 al 7 y nos diga el día.

### Ejercicio 3: Cálculo de Promedio de Calificaciones
#### Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones.
Este ejercicio se encuentra en la Carpeta **Ejercicio3** del programa de este repositorio
En este ejercicio el usuario nos introducirá 8 valores que los introduciremos en la lista _calificaciones[]_, que iremos sumando y dividirlo por 8, ya que así se calcula el promedio.
Después de declarar nuestra función como _Promedio_ en el archivo "PromedioCalificaciones.h", esta sería nuestra función que se encuentra en el archivo "PromedioCalificaciones.cpp":
```
#include "PromedioCalificaciones.h"

double Promedio(const double calificaciones[], int cantidad) {
    double suma = 0.0;

    // Sumar todas las calificaciones
    for (int i = 0; i < cantidad; i++) {
        suma += calificaciones[i];
    }

    // Calcular y devolver el promedio
    return suma / cantidad;
}
```
Además, en el "main.cpp" hacemos un bucle que nos introduzca los valores en la lista y que nos asegure con el _if_ que las notas sean válidas, ósea que estén entre los rangos del 1 al 10.
```
    std::cout << "Ingresa las calificaciones de los 8 ejercicios (entre 0 y 10):" << std::endl;
    for (i; i < numero_ejercicios; i++) {
        std::cout << "Calificación " << i + 1 << ": ";
        std::cin >> calificaciones[i];

        while (calificaciones[i] < 0 || calificaciones[i] > 10) {
            std::cout << "Calificación inválida. Ingresa un valor entre 0 y 10: ";
            std::cin >> calificaciones[i];
        }
    }
```

### Ejercicio 4: Promoción de "3 por 2" en Tienda
#### En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.
Este ejercicio se encuentra en la Carpeta **Ejercicio4** del programa de este repositorio

Para este ejercicio, en lugar de buscar los dos más caros, buscamos el más barato de todos.
Con nuestra función _Promo_ en el archivo "Promocion3x2.h", así se vería nuestra funcion en "Promoción3x2.cpp":
```
#include "Promocion3x2.h"

double Promo(double precio1, double precio2, double precio3) {
    if (precio1 <= precio2 && precio1 <= precio3) {
        return precio2 + precio3;
    } else if (precio2 <= precio1 && precio2 <= precio3) {
        return precio1 + precio3;
    } else {
        return precio1 + precio2;
    }
}
```
En el "main.cpp" nos introducen los valores y nos identifica el más barato y suma los otros dos (los dos valores más altos)

Explicación entera: Hecha por mí
Fuente del Ejercicio 3 y 4: ChatGPT

