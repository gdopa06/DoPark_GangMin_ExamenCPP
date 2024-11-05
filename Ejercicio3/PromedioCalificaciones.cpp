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