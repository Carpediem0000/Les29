#pragma once
#include "FoodProduct.h"
#include "Date.h"

class MilkProduct :
    public FoodProduct
{
protected:
    string variety;
    Date manufacture;
public:
    MilkProduct();
    MilkProduct(string name, string department, string variety, Date manufacture);

    void print()const;
};

