#include <iostream>
#include "m_utils.h"

int main() {
    int a = 10, b = 3;
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << sub(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << div(a, b) << std::endl;
    return 0;
}
