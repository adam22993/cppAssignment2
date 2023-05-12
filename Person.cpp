//
// Created by Adam Simkin on 09/05/2023.
//
#include "includes/Florist.h"
#include "includes/FlowersBouquet.h"
#include <iostream>
#include <utility>
#include <vector>
#include <string>

Person::Person(std::string name) : name(std::move(name)) {}

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers) {
    std::cout << this->getName() << " orders flowers to " <<  recipient->getName() << " from " << florist->getName();
    std::cout << ": " << FlowersBouquet(flowers).getFlowers() << std::endl;
    florist->acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowersBouquet* flowers) {
    std::cout << this->name << "accepts the flowers:" << flowers->getFlowers() << std::endl;
}

std::string Person::getName() {
    return this->name;
}
