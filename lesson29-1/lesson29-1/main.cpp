#include "MilkProduct.h"
#include"Transistor.h"

int main()
{
	cout << "\tProduct\n";
	Product a("Milk");
	a.print();
	cout << "==================================\n";

	cout << "\tElectronicProduct\n";
	ElectronicProduct a1("lamp", "shine");
	a1.print();
	cout << "==================================\n";

	cout << "\tFoodProduct\n";
	FoodProduct a2("Beer", "Alco");
	a2.print();
	cout << "==================================\n";

	cout << "\tMilkProduct\n";
	MilkProduct a3("Yogurt", "Dairy", "milk", Date());
	a3.print();
	cout << "==================================\n";

	cout << "\tTransistor\n";
	Transistor a4("Bl;aa", "dfgdfg", "field", 345);
	a4.print();
}

