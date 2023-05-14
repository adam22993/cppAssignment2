#pragma once
//#ifndef OOPASSIGNMENT2_GROWER_H
//#define OOPASSIGNMENT2_GROWER_H
#include <iostream>
#include "Person.h"
#include "Gardener.h"


class Grower: public Person {
public:
    explicit Grower(std::string name);
    Gardener* gardener{};
    FlowersBouquet* prepareFlowers(std::vector<std::string> flowers);
    std::string getName() override;
};
//#endif //OOPASSIGNMENT2_GROWER_H
