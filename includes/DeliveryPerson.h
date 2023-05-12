//
// Created by Adam Simkin on 09/05/2023.
//

#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H
#include "Person.h"
class FlowerBouquet; class Person;

class DeliveryPerson: public Person {
public:
    explicit DeliveryPerson(const char *name) : Person(name) {};
    void deliver(Person *, FlowersBouquet *);
};

#endif //DELIVERYPERSON_H
