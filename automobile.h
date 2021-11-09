#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include "automobile_item.h"
#include <iostream>

class Automobile : public Automobile_Item
{
    Automobile();
    std::string marka;
public:
    Automobile(std::string marka)
        : marka{marka} {}

    void display(void) { std::cout << "AutoMarka -> " << marka << std::endl; }
};

#endif // AUTOMOBILE_H
