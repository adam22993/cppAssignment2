#pragma once
//#ifndef GARDENER_H
//#define GARDENER_H
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>


class Gardener: public Person {
public:
    explicit Gardener(std::string name);
    FlowersBouquet* prepareFlowers(std::vector<std::string> flowers);
    std::string getName() override;
};
//#endif //GARDENER_H
