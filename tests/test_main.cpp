#include <cassert>
#include <iostream>
#include "m_utils.h"

int main() {
    // add
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);

    // sub
    assert(sub(5, 3) == 2);
    assert(sub(3, 5) == -2);

    // divide
       assert(divide(10, 2) == 5.0);
    assert(divide(7, 2) == 3.5);
    assert(divide(-10, 4) == -2.5);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
