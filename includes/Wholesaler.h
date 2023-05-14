#pragma once
//#ifndef WHOLESALER_H
//#define WHOLESALER_H
#include "Person.h"
#include "Grower.h"

class Wholesaler: public Person{
public:
    explicit Wholesaler(std::string name);
    Grower* grower{};
    FlowersBouquet* acceptOrder(std::vector<std::string>);
    std::string getName() override;
};


//#endif //WHOLESALER_H
