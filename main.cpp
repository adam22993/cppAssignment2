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
    Gardener* gardener = new Gardener("Garett");
    FlowerArranger* flowerArranger = new FlowerArranger("Flora");
    DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan");
    florist->wholesaler = wholesaler;
    florist->flowerArranger = flowerArranger;
    florist->deliveryPerson = deliveryPerson;
    wholesaler->grower = grower;
    grower->gardener = gardener;

    person->orderFlowers(florist, person2, {"Roses", "Violets", "Gladiolus"});
}
