#ifndef FLORIST_H
#define FLORIST_H
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <string>


class Florist: public Person {
private:
    std::string name;
public:
    explicit Florist(std::string name);
    Wholesaler* wholesaler{};
    FlowerArranger* flowerArranger{};
    DeliveryPerson* deliveryPerson{};
    void acceptOrder(Person*, std::vector<std::string>);
    std::string getName() override;
};

#endif //FLORIST_H
