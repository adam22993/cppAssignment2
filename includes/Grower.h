//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef OOPASSIGNMENT2_GROWER_H
#define OOPASSIGNMENT2_GROWER_H
#include <iostream>
#include "Person.h"
class FlowerBouquet; class Person;
class Grower: public Person {
public:
    explicit Grower(const char *name) : Person(name) {};
    FlowerBouquet* prepareFlowers(std::vector<std::string> flowers);
};
#endif //OOPASSIGNMENT2_GROWER_H
