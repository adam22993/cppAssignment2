//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef WHOLESALER_H
#define WHOLESALER_H
#include "includes/Person.h"
#include "includes/Grower.h"
#include "Worker.h"

class Wholesaler: public Person{
private:
    std::string name;
public:
    explicit Wholesaler(const char *name) : Person(name) {};
    Grower* grower{};
    FlowerBouquet* acceptOrder(std::vector<std::string>);
};



#endif //WHOLESALER_H
