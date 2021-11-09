#ifndef DECORATOR_H
#define DECORATOR_H

#include "automobile_item.h"

class Decorator : public Automobile_Item
{
    Decorator();
protected:
    Automobile_Item* ai;
public:
    Decorator(Automobile_Item* ai)
        : ai(ai) {}

    void display(void) { ai->display(); }
};

#endif // DECORATOR_H
