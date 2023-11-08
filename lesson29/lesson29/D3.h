#pragma once
#include "D2.h"
#include "B2.h"

class D3 :
    public D2, private B2
{
protected:
	int d3;
public:
	D3();
	D3(int b1, int d1, int d2, int b2, int d3);

	void print()const;
};

