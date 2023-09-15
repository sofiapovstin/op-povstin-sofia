#include "Function.h"

Function::Function(double x) : x(x) {}

double Function::calculateY() {
    if (x == 2.0) {
        throw exception("x cannot be equal to 2 (domain of a function)");
    }
    double y = abs((abs(x - 2) + 1) / (x - 2));
    return y;
}