#include "ElectronicProduct.h"

ElectronicProduct::ElectronicProduct()
{
	this->purpose = "Undefine";
}

ElectronicProduct::ElectronicProduct(string name, string purpose):Product(name)
{
	this->purpose = purpose;
}

void ElectronicProduct::print() const
{
	Product::print();
	cout << "Purpose: " << purpose << endl;
}
