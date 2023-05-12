#include <utility>
#include "includes/Florist.h"

Florist::Florist(std::string name) : Person(name), name(name) {}

void Florist::acceptOrder(Person* buyer, std::vector<std::string> flowers) {
    std::cout << "Florist " << this->getName() << " forwards request to Wholesaler " << this->wholesaler->getName() << "." << std::endl;
    FlowersBouquet* tempFlowers = this->wholesaler->acceptOrder(std::move(flowers));
    std::cout << "Wholesaler " << this->wholesaler->getName() << " returns flowers to Florist " << this->getName() << "." << std::endl;
    std::cout << "Florist " << this->getName() << " requests flowers arrangement from Flower Arranger " << this->flowerArranger->getName() << "." << std::endl;
    flowerArranger->arrangeFlowers(tempFlowers);
    std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << this->getName() << "." << std::endl;
    std::cout << "Florist " << this->getName() << " forwards flowers to Delivery Person " << this->deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(buyer, tempFlowers);

}

std::string Florist::getName() {
    return this->name;
}

