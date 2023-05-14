#include "includes/Person.h"
#include "includes/Florist.h"
#include "includes/FlowerArranger.h"
#include "includes/DeliveryPerson.h"
#include "includes/Grower.h"
#include "includes/Wholesaler.h"
#include "includes/FlowersBouquet.h"
#include "includes/Gardener.h"

int main() {
    Person* person = new Person("Chris");
    Person* person2 = new Person("Robin");
    Florist* florist = new Florist("Fred");
    Wholesaler* wholesaler = new Wholesaler("Watson");
    Grower* grower = new Grower("Gray");
    Gardener* gardener = new Gardener("Garrett");
    FlowerArranger* flowerArranger = new FlowerArranger("Flora");
    DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan");
    florist->wholesaler = wholesaler;
    florist->flowerArranger = flowerArranger;
    florist->deliveryPerson = deliveryPerson;
    wholesaler->grower = grower;
    grower->gardener = gardener;

    person->orderFlowers(florist, person2, {"Roses", "Violets", "Gladiolus"});
    delete person;
    delete person2;
    delete florist;
    delete wholesaler;
    delete grower;
    delete gardener;
    delete flowerArranger;
    delete deliveryPerson;
    // Not really necessary, because the program is about to end anyway and the OS will free the memory for us, but it's good practice.
    return 0;
}
