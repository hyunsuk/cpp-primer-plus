#include <iostream>
#include <string>

using namespace std;

struct inflatable
{
    string name;
    float volume;
    double price;
};

int main()
{
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };


    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };


    cout << "We are selling now is " << guest.name;
    cout << " and " << pal.name << endl;
    cout << "Sell two products for $" << guest.price + pal.price << endl;

    return 0;
}
