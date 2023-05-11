//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef OOPASSIGNMENT2_FLOWERARRANGER_H
#define OOPASSIGNMENT2_FLOWERARRANGER_H
#include "includes/Person.h"
class FlowerArranger: Person{
public:
    explicit FlowerArranger(const char *name) : Person(name) {};
    FlowerBouquet* arrangeFlowers(std::vector<std::string> flowers);

};

#endif //OOPASSIGNMENT2_FLOWERARRANGER_H
