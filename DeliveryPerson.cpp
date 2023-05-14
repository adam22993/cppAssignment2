#include "includes/DeliveryPerson.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(std::string name) : Person(std::move(name)) {}

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* flowers) {
    std::cout << "Delivery Person " << getName() << " delivers flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(flowers);
}

std::string DeliveryPerson::getName() {
    return Person::getName();
}
