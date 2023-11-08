#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Type
{
	undefine = -1, male=1, female, children
};

class Overcoat
{
protected:
	string name;
	Type type;
	int size;
	double price;
public:
	Overcoat();
	Overcoat(string name, Type type, int size, double price);

	string getName()const;
	Type getType()const;
	int getSize()const;
	double getPrice()const;

	void setName(string name);
	void setType(Type type);
	void setSize(int size);
	void setPrice(double price);

	bool operator==(const Overcoat& obj) const;
	bool operator!=(const Overcoat& obj) const;
	bool operator>(const Overcoat& obj) const;
	bool operator>=(const Overcoat& obj) const;
	bool operator<(const Overcoat& obj) const;
	bool operator<=(const Overcoat& obj) const;

	Overcoat& operator++();
	Overcoat& operator--();

	friend ostream& operator<<(std::ostream& os, const Overcoat& overcoat);
	friend istream& operator>>(std::istream& is, Overcoat& overcoat);

	void print()const;
};

