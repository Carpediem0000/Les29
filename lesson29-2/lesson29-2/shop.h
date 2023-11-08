#pragma once
#include <vector>
#include <algorithm>
#include "Overcoat.h"

class Shop
{
protected:
	vector<Overcoat> shop;
public:
	Shop();

	void addOvercoat(const Overcoat& obj);
	void delOvercoat(int ind);
	void editSize(int ind, int newSize);
	vector<Overcoat> findByType(Type type);
	void sortByPrice();

	void print()const;
};

