//
// Created by Adam Simkin on 09/05/2023.
//
#ifdef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
class Florist; class FlowerBouquet;

class Person {
protected:
    std::string name;
public:
    explicit Person(const std::string& name);
    virtual void orderFlowers(Florist *, Person *, std::vector<std::string>);
    void acceptFlowers(FlowerBouquet *);
    std::string* getName();
};

#endif //PERSON_H
