#include "includes/Grower.h"
#include <utility>
#include <vector>

Grower::Grower(std::string name) : Person(std::move(name)) {}

FlowersBouquet* Grower::prepareFlowers(std::vector <std::string> flowers) {
    std::cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
    FlowersBouquet *tempFlowers = gardener->prepareFlowers(std::move(flowers));
    std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName() << "." << std::endl;
    return tempFlowers;
}

std::string Grower::getName() {
    return Person::getName();
}

void Grower::setGardener(Gardener* pGardener) {
    Grower::gardener = pGardener;
}

