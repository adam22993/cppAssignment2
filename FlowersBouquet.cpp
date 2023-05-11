//
// Created by Adam Simkin on 09/05/2023.
//
#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H
#include <string>
#include "includes/FlowerBouquet.h"

void FlowersBouquet::arrange() {
    this->isArranged = true;
}

std::string FlowersBouquet::getFlowers() {
    std::string flowersToPrint;
    for (std::string &flower : this->flowers) {
        flowersToPrint += flower + ", ";
    }
    flowersToPrint = flowersToPrint.substr(0, flowersToPrint.length() - 2);
    return flowersToPrint + ".";
}

#endif //FLOWERSBOUQUET_H