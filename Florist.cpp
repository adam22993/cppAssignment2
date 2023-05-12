//
// Created by Adam Simkin on 09/05/2023.
//
#include <utility>
#include "includes/Florist.h"

Florist::Florist(std::string name) : Person(name), name(name) {}

void Florist::acceptOrder(Person* buyer, std::vector<std::string> flowers) {
    std::cout << "Florist " << this->getName() << " forwards request to Wholesaler " << this->wholesaler->getName()
              << std::endl;
    FlowersBouquet* tempFlowers = this->wholesaler->acceptOrder(std::move(flowers));
}

std::string Florist::getName() {
    return this->name;
}

