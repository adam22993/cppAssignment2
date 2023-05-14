#pragma once
//#ifndef OOPASSIGNMENT2_GROWER_H
//#define OOPASSIGNMENT2_GROWER_H
#include <iostream>
#include "Person.h"
#include "Gardener.h"


class Grower: public Person {
private:
    Gardener* gardener{};
public:
    explicit Grower(std::string name);
    FlowersBouquet* prepareFlowers(std::vector<std::string> flowers);
    std::string getName() override;
    void setGardener(Gardener* pGardener);
};
//#endif //OOPASSIGNMENT2_GROWER_H
