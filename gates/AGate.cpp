//
// Created by stratosphr on 11/10/2019.
//

#include <iostream>
#include <utility>
#include "AGate.h"

const std::string &AGate::getName() const {
    return name;
}

std::ostream &operator<<(std::ostream &out, const AGate &gate) {
    return out << gate.getName();
}

AGate::AGate(std::string name) : name(std::move(name)) {}
