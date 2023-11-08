#include "B1.h"

B1::B1()
{
	this->b1 = 0;
}

B1::B1(int b1)
{
	this->b1 = b1;
}

void B1::print() const
{
	cout << "b1(B1) => " << b1 << endl;
}
