#include "m_utils.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

double div(int a, int b) {
    if (b == 0) {
        throw "Division by zero";
    }
    return static_cast<double>(a) / b;
}
