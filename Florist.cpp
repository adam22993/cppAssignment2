#include <utility>
#include "includes/Florist.h"

Florist::Florist(std::string name) : Person(std::move(name)) {}

void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers) {
    std::cout << "Florist " << getName() << " forwards request to Wholesaler " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* tempFlowers = wholesaler->acceptOrder(std::move(flowers));
    std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << getName() << "." << std::endl;
    std::cout << "Florist " << getName() << " requests flowers arrangement from Flower Arranger " << flowerArranger->getName() << "." << std::endl;
    flowerArranger->arrangeFlowers(tempFlowers);
    std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << getName() << "." << std::endl;
    std::cout << "Florist " << getName() << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(recipient, tempFlowers);
}

std::string Florist::getName() {
    return Person::getName();
}

void Florist::setWholesaler(Wholesaler* pWholesaler) {
    Florist::wholesaler = pWholesaler;
}

void Florist::setFlowerArranger(FlowerArranger* pFlowerArranger) {
    Florist::flowerArranger = pFlowerArranger;
}

void Florist::setDeliveryPerson(DeliveryPerson* pDeliveryPerson) {
    Florist::deliveryPerson = pDeliveryPerson;
}

