#include "includes/Florist.h"
#include "includes/FlowersBouquet.h"
#include <iostream>
#include <utility>
#include <vector>
#include <string>

Person::Person(std::string name) : name(std::move(name)) {}

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers) {
    std::cout << getName() << " orders flowers to " <<  recipient->getName() << " from Florist " << florist->getName();
    std::cout << ": " << FlowersBouquet(flowers).getFlowers() << std::endl;
    florist->acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowersBouquet* flowers) {
    std::cout << name << " accepts the flowers: " << flowers->getFlowers() << std::endl;
    delete flowers;
}

std::string Person::getName() {
    return name;
}
