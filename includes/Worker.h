//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef PERSON_H
#define PERSON_H
#include "Person.h"
#include <string>

class Worker: public Person {
public:
    explicit Worker(Person name): Person(name) {};
    virtual void acceptOrder(Person*, std::vector<std::string>) = 0;
};


#endif //PERSON_H
