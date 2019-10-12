//
// Created by stratosphr on 12/10/2019.
//

#ifndef GATES_TRUE_H
#define GATES_TRUE_H


#include "AGate.h"

class True : public AGate {

public:
    explicit True();

    bool computeOutput() const override;

};


#endif //GATES_TRUE_H
