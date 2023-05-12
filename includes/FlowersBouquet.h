#ifndef FLOWERBOUQUET_H
#define FLOWERBOUQUET_H
#include <utility>
#include <vector>

class FlowersBouquet {
private:
    bool Arranged;
public:
    std::vector<std::string> flowersSet;
    explicit FlowersBouquet(std::vector<std::string> flowers);
    void arrange();
    std::string getFlowers();
    bool isArranged();
};


#endif //FLOWERBOUQUET_H
