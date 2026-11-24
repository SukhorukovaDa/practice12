#include <iostream>
#include "m_utils.h"

int main() {
    int a = 15, b = 2;
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << sub(a, b) << std::endl;
  std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;
    return 0;
}
