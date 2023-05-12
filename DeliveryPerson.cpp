#include "includes/DeliveryPerson.h"
#include <iostream>

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* flowers) {
    std::cout << "Delivery Person " << this->getName() << " delivers flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(flowers);
}
