//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H
#include "Person.h"
class FlowerArranger: Person{
public:
    explicit FlowerArranger(const char *name) : Person(name) {};
    FlowersBouquet* arrangeFlowers(std::vector<std::string> flowers);
};

#endif //FLOWERARRANGER_H
