#pragma once
#include "D1.h"
class D2 :
    private D1
{
protected:
	int d2;
public:
	D2();
	D2(int b1, int d1, int d2);

	void print()const;
};

