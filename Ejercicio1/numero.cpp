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