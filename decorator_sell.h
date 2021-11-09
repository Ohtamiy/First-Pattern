#ifndef DECORATOR_SELL_H
#define DECORATOR_SELL_H

#include "decorator.h"
#include <iostream>
#include <stack>

class Decorator_Sell : public Decorator
{
    std::stack<int> sellprices;
public:
    Decorator_Sell(Automobile_Item* ai)
        : Decorator(ai) {}

    void sell(int price) { sellprices.push(price); }
    void display();
};

#endif // DECORATOR_SELL_H
