#include "decorator_sell.h"

void Decorator_Sell::display(){
    std::cout << "Sell prices for this Auto: \n";
    while (!sellprices.empty()) {
        std::cout << "\t" << sellprices.top() << "$" << std::endl;
        sellprices.pop();
    }
}
