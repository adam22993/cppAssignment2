//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef OOPASSIGNMENT2_GROWER_H
#define OOPASSIGNMENT2_GROWER_H
#include <iostream>
#include "Person.h"
#include "Gardener.h"


class Grower: public Person {
private:
    std::string name;
public:
    explicit Grower(std::string name);
    Gardener* gardener{};
    FlowersBouquet* prepareFlowers(std::vector<std::string> flowers);
};
#endif //OOPASSIGNMENT2_GROWER_H
