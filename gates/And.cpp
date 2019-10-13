//
// Created by stratosphr on 12/10/2019.
//

#include "And.h"

#include <utility>
#include <numeric>
#include <algorithm>

And::And(std::vector<AGate *> inputs) : AGate("And", std::move(inputs)) {

}

bool And::computeOutput() const {
    std::vector<bool> inputsValues;
    std::transform(inputs.begin(), inputs.end(), std::back_inserter(inputsValues), [](AGate *gate) { return gate->computeOutput(); });
    return std::accumulate(inputsValues.begin(), inputsValues.end(), true, std::logical_and<>());
}
