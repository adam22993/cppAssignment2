//
// Created by Adam Simkin on 09/05/2023.
//
#include "includes/FlowerArranger.h"
#include "includes/FlowersBouquet.h"
#include <vector>
#include <iostream>

FlowersBouquet* FlowerArranger::arrangeFlowers(std::vector <std::string> flowers) {
    std::cout << "FlowerArranger " << this->getName() << " arranges flowers" << std::endl;
    FlowersBouquet* flowersBouquet = new FlowersBouquet(flowers);
    flowersBouquet->arrange();
    return flowersBouquet;
}

