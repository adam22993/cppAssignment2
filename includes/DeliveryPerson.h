#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H
#include "Person.h"

class DeliveryPerson: public Person {
public:
    explicit DeliveryPerson(std::string name);
    void deliver(Person *, FlowersBouquet *);
};

#endif //DELIVERYPERSON_H
