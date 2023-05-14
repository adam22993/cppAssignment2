#include <utility>

#include "includes/Wholesaler.h"

Wholesaler::Wholesaler(std::string name) : Person(std::move(name)){}

FlowersBouquet* Wholesaler::acceptOrder(std::vector <std::string> flowers) {
    std::cout << "Wholesaler " << getName() << " forwards the request to Grower " << grower->getName() << "." << std::endl;
    FlowersBouquet* tempFlowers = grower->prepareFlowers(std::move(flowers));
    std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << std::endl;
    return tempFlowers;
}

std::string Wholesaler::getName() {
    return Person::getName();
}

