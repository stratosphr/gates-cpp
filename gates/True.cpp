//
// Created by stratosphr on 12/10/2019.
//

#include "True.h"
#include <iostream>

True::True() : AGate("True", {}) {
}

bool True::computeOutput() const {
    return true;
}

