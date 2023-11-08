#include "B2.h"

B2::B2()
{
	this->b2 = 0;
}

B2::B2(int b2)
{
	this->b2 = b2;
}

void B2::print() const
{
	cout << "b2(B2) => " << b2 << endl;
}
