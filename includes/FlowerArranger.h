#pragma once
//#ifndef FLOWERARRANGER_H
//#define FLOWERARRANGER_H
#include "Person.h"
class FlowerArranger: public Person {
public:
    explicit FlowerArranger(std::string name);
    void arrangeFlowers(FlowersBouquet* flowers);
    std::string getName() override;
};

//#endif //FLOWERARRANGER_H
