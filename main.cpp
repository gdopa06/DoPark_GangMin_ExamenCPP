#include <iostream>
#include "Ejercicio1/numero.h"
#include "Ejercicio2/DiaSemana.h"
#include "Ejercicio3/PromedioCalificaciones.h"
#include "Ejercicio4/Promocion3x2.h"

int numero;

const int numero_ejercicios = 8;
double calificaciones[numero_ejercicios];
double precio1, precio2, precio3;

int main() {
    //Ejercicio1

    std::cout << "Ejercicio 1" << std::endl;
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;
    std::string resultado = Numero(numero);
    std::cout << resultado << std::endl;

    //Ejercicio 2

    std::cout << "Ejercicio 2" << std::endl;
    std::cout << "Ingresa un número del 1 al 7: ";
    std::cin >> numero;

    std::string dia = DiaSemana(numero);

    std::cout << dia << std::endl;

    //Ejercicio 3

    std::cout << "Ejercicio 3" << std::endl;

    std::cout << "Ingresa las calificaciones de los 8 ejercicios (entre 0 y 10):" << std::endl;
    for (int i = 0; i < numero_ejercicios; i++) {
        std::cout << "Calificación " << i + 1 << ": ";
        std::cin >> calificaciones[i];

        while (calificaciones[i] < 0 || calificaciones[i] > 10) {
            std::cout << "Calificación inválida. Ingresa un valor entre 0 y 10: ";
            std::cin >> calificaciones[i];
        }
    }

    double promedio = Promedio(calificaciones, numero_ejercicios);

    std::cout << "Promedio de las calificaciones: " << promedio << std::endl;

    //Ejercicio 4

    std::cout << "Ejercicio 4" << std::endl;
    std::cout << "Ingresa el precio del primer artículo: ";
    std::cin >> precio1;
    std::cout << "Ingresa el precio del segundo artículo: ";
    std::cin >> precio2;
    std::cout << "Ingresa el precio del tercer artículo: ";
    std::cin >> precio3;

    // Calcular el total a pagar usando la función calcularTotal
    double total = Promo(precio1, precio2, precio3);

    // Mostrar el total a pagar bajo la promoción
    std::cout << "El total a pagar bajo la promoción es: " << total << std::endl;


    return 0;
}
