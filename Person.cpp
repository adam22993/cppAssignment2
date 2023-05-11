//
// Created by Adam Simkin on 09/05/2023.
//
#ifndef PERSON_H
#define PERSON_H
#include "includes/Florist.h"
#include "includes/FlowerBouquet.h"
#include "includes/Person.h"

#include <iostream>
#include <vector>
#include <string>


void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers) {
    std::cout << this->getName() << "orders flowers to " <<  recipient->getName() << "from" << florist->getName();
    std::cout << FlowersBouquet(flowers).getFlowers() << std::endl;
    florist->acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowerBouquet* flowers) {
    std::cout << this->name << "accepts the flowers:" << flowers->getFlowers() << std::endl;
}

Person::Person(const std::string& name) {

}

std::string *Person::getName() {
    return &this->name;
}

#endif //PERSON_H