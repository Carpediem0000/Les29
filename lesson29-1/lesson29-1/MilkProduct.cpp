#include "MilkProduct.h"

MilkProduct::MilkProduct()
{
	this->variety = "Undefine";
	this->manufacture = Date();
}

MilkProduct::MilkProduct(string name, string department, string variety, Date manufacture):FoodProduct(name, department)
{
	this->variety = variety;
	this->manufacture = manufacture;
}

void MilkProduct::print() const
{
	FoodProduct::print();
	cout << "Variety: " << variety << endl;
	cout << "Date of manufacture: "; manufacture.showDate();
}
