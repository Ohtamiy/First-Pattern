#ifndef DECORATOR_BUY_H
#define DECORATOR_BUY_H

#include "decorator.h"
#include <iostream>
#include <stack>

class Decorator_Buy : public Decorator
{
    std::stack<int> buyprices;
public:
    Decorator_Buy(Automobile_Item* ai)
        : Decorator(ai) {}

    void buy(int price) { buyprices.push(price); }
    void display();
};

#endif // DECORATOR_BUY_H
