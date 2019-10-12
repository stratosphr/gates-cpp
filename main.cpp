#include <iostream>
#include "gates/AGate.h"

bool test(std::vector<AGate> inputs) {
    return false;
}

int main() {
    AGate and1("AND", {}, test);
    std::cout << and1 << std::endl;
    std::cout << and1.computeOutput() << std::endl;
    return EXIT_SUCCESS;
}