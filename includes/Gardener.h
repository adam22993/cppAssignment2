//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef OOPASSIGNMENT2_GARDENER_H
#define OOPASSIGNMENT2_GARDENER_H
#include "Person.h"
#include "FlowerBouquet.h"
#include <iostream>
#include <vector>
#include <string>


class Gardener: public Person {
private:
    std::string name;
public:
    explicit Gardener(const char *name) : Person(name) {};
    FlowerBouquet* prepareFlowers(const std::vector<std::string>& flowers);

};
#endif //OOPASSIGNMENT2_GARDENER_H
