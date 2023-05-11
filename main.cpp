#include "includes/Person.h"
#include "includes/Florist.h"
#include "includes/FlowerArranger.h"
#include "includes/DeliveryPerson.h"
#include "includes/Grower.h"
#include "includes/Wholesaler.h"
#include "includes/FlowerBouquet.h"
#include "includes/Gardener.h"
#include <iostream>

int main() {
    Person* person = new Person("Chris");
    Person* person2 = new Person("Robin");
    Florist* florist = new Florist("Fred");
    Wholesaler* wholesaler = new Wholesaler("Watson");
    Grower* grower = new Grower("Gray");
    Gardener* gardener = new Gardener("Garett");
    FlowerArranger* flowerArranger = new FlowerArranger("Flora");
    DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan");

    person->orderFlowers(florist, person2, {"Roses", "Violets", "Gladiolus"});
}
