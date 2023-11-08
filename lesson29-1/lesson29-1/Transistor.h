#pragma once
#include "ElectronicProduct.h"
class Transistor :
    public ElectronicProduct
{
protected:
    string type;
    int number;
public:
    Transistor();
    Transistor(string name, string purpose, string type, int number);

    void print()const;
};

