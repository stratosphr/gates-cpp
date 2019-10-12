#include <iostream>
#include "gates/AGate.h"
#include "gates/True.h"
#include "gates/False.h"
#include "gates/And.h"

int main() {
    True true1;
    False false1;
    And and1({&false1, &true1});
    std::cout << and1 << std::endl;
    return EXIT_SUCCESS;
}