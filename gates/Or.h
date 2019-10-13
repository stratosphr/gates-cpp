//
// Created by stratosphr on 13/10/2019.
//

#ifndef GATES_OR_H
#define GATES_OR_H


#include "AGate.h"

class Or : public AGate {

public:
    explicit Or(std::vector<AGate *> inputs);

    bool computeOutput() const override;

};


#endif //GATES_OR_H
