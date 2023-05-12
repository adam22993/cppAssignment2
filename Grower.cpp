#include "includes/Grower.h"
#include <vector>

FlowersBouquet* Grower::prepareFlowers(std::vector <std::string> flowers) {
    std::cout << "Grower " << this->name << " forwards the request to Gardener " << this->gardener->getName() << "." << std::endl;
    FlowersBouquet *tempFlowers = this->gardener->prepareFlowers(std::move(flowers));
    std::cout << "Gardener " << this->gardener->getName() << " returns flowers to Grower " << this->name << "." << std::endl;
    return tempFlowers;
}

Grower::Grower(std::string name) : Person(name), name(name) {}

