#include "D2.h"

D2::D2()
{
	this->d2 = 0;
}

D2::D2(int b1, int d1, int d2):D1(b1,d1)
{
	this->d2 = d2;
}

void D2::print() const
{
	D1::print();
	cout << "d2(D2) => " << d2 << endl;
}
