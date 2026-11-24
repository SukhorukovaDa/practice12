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

    // div
    assert(div(10, 2) == 5.0);
    assert(div(7, 2) == 3.5);
    assert(div(-10, 4) == -2.5);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
