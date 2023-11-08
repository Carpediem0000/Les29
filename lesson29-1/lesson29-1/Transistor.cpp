#include "Transistor.h"

Transistor::Transistor()
{
	this->type = "Undefine";
	this->number = 0;
}

Transistor::Transistor(string name, string purpose, string type, int number):ElectronicProduct(name, purpose)
{
	this->type = type;
	this->number = number;
}

void Transistor::print() const
{
	ElectronicProduct::print();
	cout << "Type: " << type << endl;
	cout << "Number: " << number << endl;
}
