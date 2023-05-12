//
// Created by Adam Simkin on 09/05/2023.
//
#include "includes/Wholesaler.h"

Wholesaler::Wholesaler(std::string name) : Person(name), name(name) {}

FlowersBouquet* Wholesaler::acceptOrder(std::vector <std::string> flowers) {
    std::cout << "Wholesaler " << this->name << " forwards request to Grower " << this->grower->getName() << std::endl;
    FlowersBouquet* tempFlowers = grower->prepareFlowers(std::move(flowers));
    std::cout << "Grower " << this->grower->getName() << " returns flowers to Wholesaler " << this->name << std::endl;
    return tempFlowers;
}

std::string Wholesaler::getName() {
    return this->name;
}

