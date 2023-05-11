//
// Created by Adam Simkin on 09/05/2023.
//
#ifndef FLORIST_H
#define FLORIST_H
#include "Wholesaler.h"
#include "Person.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <string>


class Florist: public Person {
private:
    std::string name;
public:
    explicit Florist(const char *name) : Person(name) {};
    Wholesaler* wholesaler{};
    FlowerArranger* flowerArranger{};
    DeliveryPerson* deliveryPerson{};
    void acceptOrder(Person*, const std::vector<std::string>&);
    std::string* getName();
};

#endif //FLORIST_H
