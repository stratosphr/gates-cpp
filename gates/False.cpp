//
// Created by stratosphr on 12/10/2019.
//

#include "False.h"

False::False() : AGate("False", {}) {

}

bool False::computeOutput() const {
    return false;
}
