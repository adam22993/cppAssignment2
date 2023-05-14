#include <utility>

#include "includes/Gardener.h"
#include "includes/FlowersBouquet.h"

Gardener::Gardener(std::string name) : Person(std::move(name)){}

FlowersBouquet* Gardener::prepareFlowers(std::vector<std::string> flowers) {
    std::cout << "Gardener " << getName() << " prepares flowers." << std::endl;
    FlowersBouquet* tempFlowers = new FlowersBouquet(std::move(flowers));
    return tempFlowers;
}

std::string Gardener::getName() {
    return Person::getName();
}


