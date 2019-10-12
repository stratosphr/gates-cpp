//
// Created by stratosphr on 12/10/2019.
//

#ifndef GATES_FALSE_H
#define GATES_FALSE_H


#include "AGate.h"

class False : public AGate {

public:
    explicit False();

    bool computeOutput() const override;

};


#endif //GATES_FALSE_H
