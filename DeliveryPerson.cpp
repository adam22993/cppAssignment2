#include "includes/DeliveryPerson.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(std::string name) : Person(name) {}

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* flowers) {
    std::cout << "Delivery Person " << this->getName() << " delivers flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(flowers);
}
