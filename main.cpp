#include <iostream>
#include "gates/AGate.h"
#include "gates/True.h"
#include "gates/False.h"
#include "gates/And.h"
#include "gates/Not.h"
#include "gates/Or.h"

int main() {
    True true1;
    False false1;
    And and1({&true1, &true1, &true1});
    Or or1({&false1, &false1, &false1});
    Not not1(&and1);
    std::cout << and1 << std::endl;
    std::cout << not1 << std::endl;
    std::cout << or1 << std::endl;
    return EXIT_SUCCESS;
}