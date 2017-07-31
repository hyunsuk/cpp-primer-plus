#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    using std::cout;
    using std::endl;

    company = co;
    if (n < 0) {
        cout << "The number of shares can not be negative" << endl;
        cout << "set " << company << " shares to 0" << endl;
        shares = 0;

    } else {
        shares = n;
        share_val = pr;
        set_tot();
    }
}

void Stock::buy(long num, double price)
{
    using std::cout;
    using std::endl;

    if (num < 0) {
        cout << "purchased shares can not be negative" << endl;
        cout << "cancel purchase" << endl;

    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    using std::endl;

    if (num < 0) {
        cout << "selling shares can not be negative" << endl;
        cout << "cancel sell" << endl;
    } else if (num > shares) {
        cout << "you can not sell more than your holdings" << endl;
        cout << "cancel sell" << endl;
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    cout << "Company name: " << company
         << " Stock number: " << shares << endl
         << " Stock price: $" << share_val
         << " Stock total price: " << total_val << endl;
}
