#include "D3.h"

D3::D3()
{
	this->d3 = 0;
}

D3::D3(int b1, int d1, int d2, int b2, int d3):D2(b1, d1, d2),B2(b2)
{
	this->d3 = d3;
}

void D3::print() const
{
	D2::print();
	B2::print();
	cout << "d3(D3) => " << d3 << endl;
}
