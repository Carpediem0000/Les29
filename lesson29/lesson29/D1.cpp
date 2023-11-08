#include "D1.h"

D1::D1()
{
	this->d1 = 0;
}

D1::D1(int b1, int d1):B1(b1)
{
	this->d1 = d1;
}

void D1::print() const
{
	B1::print();
	cout << "d1(D1) => " << d1 << endl;
}
