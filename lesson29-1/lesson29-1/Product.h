#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
	string name;
public:
	Product();
	Product(string name);

	void print()const;
};

