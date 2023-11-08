#pragma once
#include "Product.h"
class ElectronicProduct :
    public Product
{
protected:
    string purpose;
public:
    ElectronicProduct();
    ElectronicProduct(string name, string purpose);

    void print()const;
};

