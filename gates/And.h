//
// Created by stratosphr on 12/10/2019.
//

#ifndef GATES_AND_H
#define GATES_AND_H


#include "AGate.h"

class And : public AGate {

public:
    explicit And(std::vector<AGate *> inputs);

    bool computeOutput() const override;
};


#endif //GATES_AND_H
