#include "shop.h"

Shop::Shop()
{

}

void Shop::addOvercoat(const Overcoat& obj)
{
	shop.push_back(obj);
}

void Shop::delOvercoat(int ind)
{
	if (ind >= 0 && ind < shop.size())
		shop.erase(shop.begin() + ind);
}

void Shop::editSize(int ind, int newSize)
{
	if (ind >= 0 && ind < shop.size())
		shop[ind].setSize(newSize);
}

vector<Overcoat> Shop::findByType(Type type)
{
	vector<Overcoat> result;
	for (const Overcoat& overcoat : shop) {
		if (overcoat.getType() == type) {
			result.push_back(overcoat);
		}
	}
	return result;
}

void Shop::sortByPrice()
{
	std::sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat& b) {
		return a.getPrice() < b.getPrice();
		});
}

void Shop::print() const
{
	for (int i = 0; i < shop.size(); i++)
	{
		cout << "\t#" << i << endl;
		shop[i].print();
		cout << "---------------------------------\n";
	}
}
