#include "FoodProduct.h"

FoodProduct::FoodProduct()
{
	this->department = "Undefine";
}

FoodProduct::FoodProduct(string name, string department):Product(name)
{
	this->department = department;
}

void FoodProduct::print() const
{
	Product::print();
	cout << "Department: " << department << endl;
}
