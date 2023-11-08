#include "shop.h"

int main()
{
    Shop shop;

    Overcoat a("Jacket1", Type::male, 42, 150.0);
    Overcoat b("Jacket2", Type::female, 38, 200.0);
    Overcoat c("Jacket3", Type::children, 32, 80.0);

    shop.addOvercoat(a);
    shop.addOvercoat(b);
    shop.addOvercoat(c);

    cout << "All products in the store:" << endl;
    shop.print();

    shop.editSize(2, 44);
    cout << "The size of item #2 has been changed:" << endl;
    shop.print();

    vector<Overcoat> arr = shop.findByType(Type::female);
    cout << "Women's products:" << endl;
    for (const Overcoat& coat : arr) {
        cout << coat << endl;
    }

    shop.sortByPrice();
    cout << "Sort by price:" << endl;
    shop.print();
}