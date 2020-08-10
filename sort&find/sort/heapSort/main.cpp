#include <iostream>
#include <vector>
#include <random>
#include "heapSort.h"
int main() {
    std::default_random_engine dre;
    std::uniform_int_distribution<int> di(1,1000);
    std::shared_ptr<std::vector<int> > spi = std::make_shared<std::vector<int> >();
    for(int i = 0; i < 90; ++i){
        spi->push_back(di(dre));
    }
    for(auto i : *spi){
        std::cout << i << " ";
    }
    uint32_t length = spi->size();
    heapSort hs(spi, length);
    hs.sort();
    auto cnt = 0;
    for(auto i : *spi){
        std::cout << i << " ";
        cnt ++;
        if(cnt % 5 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
