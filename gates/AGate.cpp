//
// Created by stratosphr on 11/10/2019.
//

#include <iostream>
#include <utility>
#include "AGate.h"

AGate::AGate(std::string name, std::vector<AGate> inputs, bool (&output)(std::vector<AGate>)) : name(std::move(name)), inputs(std::move(inputs)), output(output) {
}

std::string AGate::getName() const {
    return name;
}

bool AGate::computeOutput() const {
    return output(inputs);
}

std::ostream &operator<<(std::ostream &out, const AGate &gate) {
    return out << gate.getName();
}
