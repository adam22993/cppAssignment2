//
// Created by Adam Simkin on 09/05/2023.
//
#include "includes/Grower.h"
#include <vector>

FlowersBouquet* Grower::prepareFlowers(std::vector <std::string> flowers) {
    std::cout << "Grower " << this->name << " forwards the request to gardener " << this->gardener->getName() << std::endl;
    FlowersBouquet *tempFlowers = this->gardener->prepareFlowers(std::move(flowers));
    return tempFlowers;
}

Grower::Grower(std::string name) : Person(name), name(name) {}

