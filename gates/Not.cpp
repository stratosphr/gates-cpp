//
// Created by stratosphr on 13/10/2019.
//

#include "Not.h"

Not::Not(AGate *gate) : AGate("Not", {gate}) {

}

bool Not::computeOutput() const {
    return !inputs[0]->computeOutput();
}
