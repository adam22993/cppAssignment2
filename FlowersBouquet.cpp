//#ifndef FLOWERSBOUQUET_H
//#define FLOWERSBOUQUET_H
#include <string>
#include "includes/FlowersBouquet.h"


FlowersBouquet::FlowersBouquet(std::vector<std::string> flowersSet) : flowersSet(std::move(flowersSet)), Arranged(false) {}

void FlowersBouquet::arrange() {
    Arranged = true;
}

std::string FlowersBouquet::getFlowers() {
    std::string flowersToPrint;
    for (std::string &flower : flowersSet) {
        flowersToPrint += flower + ", ";
    }
    flowersToPrint = flowersToPrint.substr(0, flowersToPrint.length() - 2);
    return flowersToPrint + ".";
}

bool FlowersBouquet::isArranged() const {
    return Arranged;
}

//#endif //FLOWERSBOUQUET_H