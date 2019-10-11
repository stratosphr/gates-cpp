#include <iostream>
#include "gates/AGate.h"

int main() {
    AGate gate("AND");
    std::cout << gate << std::endl;
    return 0;
}