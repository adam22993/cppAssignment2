#pragma once
#include <string>
#include <vector>
class Florist;
class FlowersBouquet;

class Person {
private:
    std::string name;
public:
    explicit Person(std::string name);
    void orderFlowers(Florist*, Person*, std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
    virtual std::string getName();
};

