//
// Created by stratosphr on 11/10/2019.
//

#ifndef GATES_AGATE_H
#define GATES_AGATE_H

#include <iosfwd>

class AGate {

private:
    std::string name;

public:
    explicit AGate(std::string name);

    const std::string &getName() const;

    friend std::ostream &operator<<(std::ostream &out, const AGate &gate);

};

#endif //GATES_AGATE_H
