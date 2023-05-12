//
// Created by Adam Simkin on 09/05/2023.
//
#include <utility>

#include "includes/Gardener.h"
#include "includes/FlowersBouquet.h"

Gardener::Gardener(std::string name) : Person(name), name(name) {}

FlowersBouquet* Gardener::prepareFlowers(std::vector<std::string> flowers) {
    std::cout << "Gardener " << this->name << " prepares flowers." << std::endl;
    FlowersBouquet* tempFlowers = new FlowersBouquet(std::move(flowers));
    return tempFlowers;
}

std::string Gardener::getName() {
    return this->name;
}


