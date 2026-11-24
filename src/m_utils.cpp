#include "m_utils.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

double divide(int a, int b) {
    if (b == 0) {
        // ... ваш код обработки деления на ноль (например, throw или return 0.0)
    }
    return static_cast<double>(a) / b;
}