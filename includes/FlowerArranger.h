//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H
#include "Person.h"
class FlowerArranger: public Person {
private:
    std::string name;
public:
    explicit FlowerArranger(std::string name) : Person(name), name(name) {};
    void arrangeFlowers(FlowersBouquet* flowers);
    std::string getName() override;
};

#endif //FLOWERARRANGER_H
