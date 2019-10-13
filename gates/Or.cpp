//
// Created by stratosphr on 13/10/2019.
//

#include "Or.h"

#include <utility>
#include <algorithm>
#include <numeric>

Or::Or(std::vector<AGate *> inputs) : AGate("Or", std::move(inputs)) {

}

bool Or::computeOutput() const {
    std::vector<bool> outputsValues;
    std::transform(inputs.begin(), inputs.end(), std::back_inserter(outputsValues), [](AGate *input) { return input->computeOutput(); });
    return std::accumulate(outputsValues.begin(), outputsValues.end(), false, [](bool left, bool right) { return left || right; });
}
