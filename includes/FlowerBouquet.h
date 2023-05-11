#ifndef FLOWERBOUQUET_H
#define FLOWERBOUQUET_H
#include <utility>
#include <vector>

class FlowersBouquet {
private:
    std::vector<std::string> flowers;
    bool isArranged = false;
public:
    explicit FlowersBouquet(std::vector<std::string> flowers) : flowers(std::move(flowers)) {};
    void arrange();
    std::string getFlowers();
};


#endif //FLOWERBOUQUET_H
