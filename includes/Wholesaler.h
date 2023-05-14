#pragma once
//#ifndef WHOLESALER_H
//#define WHOLESALER_H
#include "Person.h"
#include "Grower.h"

class Wholesaler: public Person{
private:
    Grower* grower{};
public:
    explicit Wholesaler(std::string name);
    FlowersBouquet* acceptOrder(std::vector<std::string>);
    std::string getName() override;
    void setGrower(Grower* pGrower);
};


//#endif //WHOLESALER_H
