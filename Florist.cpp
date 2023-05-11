//
// Created by Adam Simkin on 09/05/2023.
//
#include "includes/Florist.h"

void Florist::acceptOrder(Person *, const std::vector<std::string>&) {
    std::cout << "Florist" << this->name << "forwards request to Wholesaler" << Wholesaler->name << std::endl;
}

std::string* Florist::getName() {
    return &this->name;
}

