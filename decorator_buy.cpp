#include "decorator_buy.h"

void Decorator_Buy::display(){
    std::cout << "Buy prices for this Auto: \n";
    while (!buyprices.empty()) {
        std::cout << "\t" << buyprices.top() << "$" << std::endl;
        buyprices.pop();
    }
    std::cout << std::endl;
}
