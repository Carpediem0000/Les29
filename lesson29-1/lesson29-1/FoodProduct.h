#pragma once
#include "Product.h"
class FoodProduct :
    public Product
{
protected:
    string department;
public:
    FoodProduct();
    FoodProduct(string name, string department);

    void print()const;
};

