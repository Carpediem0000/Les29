#include "Product.h"

Product::Product()
{
	this->name = "Undefine";
}

Product::Product(string name)
{
	this->name = name;
}

void Product::print() const
{
	cout << "Name: " << name << endl;
}
