#pragma once
//#ifndef FLOWERBOUQUET_H
//#define FLOWERBOUQUET_H
#include <utility>
#include <vector>

class FlowersBouquet {
private:
    bool Arranged;
    std::vector<std::string> flowersSet;
public:
    explicit FlowersBouquet(std::vector<std::string> flowers);
    void arrange();
    std::string getFlowers();
    bool isArranged() const;
};


//#endif //FLOWERBOUQUET_H