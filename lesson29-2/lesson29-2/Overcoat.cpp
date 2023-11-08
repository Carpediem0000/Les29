#include "Overcoat.h"

Overcoat::Overcoat()
{
    this->name = "Undefine";
    this->type = Type::undefine;
    this->size = 0;
    this->price = 0;
}

Overcoat::Overcoat(string name, Type type, int size, double price)
{
    this->name = name;
    this->type = type;
    this->size = size;
    this->price = price;
}

string Overcoat::getName() const
{
    return name;
}

Type Overcoat::getType() const
{
    return type;
}

int Overcoat::getSize() const
{
    return size;
}

double Overcoat::getPrice() const
{
    return price;
}

void Overcoat::setName(string name)
{
    this->name = name;
}

void Overcoat::setType(Type type)
{
    this->type = type;
}

void Overcoat::setSize(int size)
{
    if (size > 17 && size<71)
    {
        this->size = size;
    }
}

void Overcoat::setPrice(double price)
{
    if (price>0)
    {
        this->price = price;
    }
}

bool Overcoat::operator==(const Overcoat& obj) const
{
    return this->type == obj.type;
}

bool Overcoat::operator!=(const Overcoat& obj) const
{
    return !(*this == obj);
}

bool Overcoat::operator>(const Overcoat& obj) const
{
    return this->price > obj.price;
}

bool Overcoat::operator>=(const Overcoat& obj) const
{
    return *this > obj || *this == obj;
}

bool Overcoat::operator<(const Overcoat& obj) const
{
    return !(*this > obj);
}

bool Overcoat::operator<=(const Overcoat& obj) const
{
    return *this < obj || *this == obj;
}

Overcoat& Overcoat::operator++()
{
    if (size<70)
        size++;
    return *this;
}

Overcoat& Overcoat::operator--()
{
    if (size > 16)
        size--;
    return *this;
}

void Overcoat::print() const
{
    cout << "Name: " << name << endl;
    switch (type)
    {
    case undefine:
        cout << "Type: undefine\n";
        break;
    case male:
        cout << "Type: male\n";
        break;
    case female:
        cout << "Type: female\n";
        break;
    case children:
        cout << "Type: children\n";
        break;
    }
    cout << "Size: " << this->size << endl;
    cout << "Price: " << price << "uah\n";   
}

ostream& operator<<(std::ostream& os, const Overcoat& overcoat)
{
    os << "Name: " << overcoat.name << endl;
    switch (overcoat.type)
    {
    case undefine:
        os << "Type: undefine\n";
        break;
    case male:
        os << "Type: male\n";
        break;
    case female:
        os << "Type: female\n";
        break;
    case children:
        os << "Type: children\n";
        break;
    }
    os << "Size: " << overcoat.size << endl;
    os << "Price: " << overcoat.price << "uah\n";
    return os;
}

istream& operator>>(std::istream& is, Overcoat& overcoat)
{
    cout << "Enter name: ";
    getline(is, overcoat.name);
    cout << "Enter type(1 - male, 2 - female, 3 - children): ";
    int type;
    is >> type;
    if (type == 1) { overcoat.type = Type::male; }
    else if (type == 2) { overcoat.type = Type::female; }
    else if (type == 2) { overcoat.type = Type::children; }
    cout << "Enter size: ";
    is >> overcoat.size;
    cout << "Enter price: ";
    is >> overcoat.price; 
    return is;
}
