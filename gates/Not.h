//
// Created by stratosphr on 13/10/2019.
//

#ifndef GATES_NOT_H
#define GATES_NOT_H


#include "AGate.h"

class Not : public AGate {

public:
    explicit Not(AGate *gate);

    bool computeOutput() const override;

};


#endif //GATES_NOT_H
