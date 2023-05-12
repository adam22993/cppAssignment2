#include "includes/FlowerArranger.h"
#include "includes/FlowersBouquet.h"
#include <iostream>

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowers) {
    if (flowers->isArranged()) {
        std::cout << "Flowers are already arranged." << std::endl;
        return;
    }
    std::cout << "Flower Arranger " << this->getName() << " arranges flowers." << std::endl;
    flowers->arrange();
}

std::string FlowerArranger::getName() {
    return this->name;
}

