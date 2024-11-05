#include "Promocion3x2.h"

double Promo(double precio1, double precio2, double precio3) {
    if (precio1 <= precio2 && precio1 <= precio3) {
        // precio1 es el menor, sumar precio2 y precio3
        return precio2 + precio3;
    } else if (precio2 <= precio1 && precio2 <= precio3) {
        // precio2 es el menor, sumar precio1 y precio3
        return precio1 + precio3;
    } else {
        // precio3 es el menor, sumar precio1 y precio2
        return precio1 + precio2;
    }
}