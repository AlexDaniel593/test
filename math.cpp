#include "math.h"

int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b){
    return a - b;
}

int multiplicacion(int a, int b){
    return a * b;
}

int division(int a, int b){
    if (b == 0) {
        throw "Division by zero is not allowed.";
    }
    return a / b;
}