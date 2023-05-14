#pragma once
//#ifndef FLORIST_H
//#define FLORIST_H
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <string>


class Florist: public Person {
private:
    Wholesaler* wholesaler{};
    FlowerArranger* flowerArranger{};
    DeliveryPerson* deliveryPerson{};
public:
    explicit Florist(std::string name);
    void acceptOrder(Person*, std::vector<std::string>);
    std::string getName() override;
    void setWholesaler(Wholesaler* pWholesaler);
    void setFlowerArranger(FlowerArranger* pFlowerArranger);
    void setDeliveryPerson(DeliveryPerson* pDeliveryPerson);
};

//#endif //FLORIST_H
