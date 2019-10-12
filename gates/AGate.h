//
// Created by stratosphr on 11/10/2019.
//

#ifndef GATES_AGATE_H
#define GATES_AGATE_H

#include <iosfwd>
#include <vector>

class AGate {

private:
    std::string name;
    std::vector<AGate> inputs;

    bool (&output)(std::vector<AGate> inputs);

public:
    explicit AGate(std::string name, std::vector<AGate> inputs, bool (&output)(std::vector<AGate> inputs));

    std::string getName() const;

    bool computeOutput() const;

    friend std::ostream &operator<<(std::ostream &out, const AGate &gate);

};

#endif //GATES_AGATE_H
