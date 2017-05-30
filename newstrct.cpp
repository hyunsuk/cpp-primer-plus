#include <iostream>
#include <string>

struct inflatable
{
    std::string name;
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable * ps = new inflatable;

    cout << "Enter the Name: ";
    cin >> ps->name;
    cout << "Enter the Volume: ";
    cin >> (*ps).volume;
    cout << "Entr the Price: ";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: " << ps->price << endl;
    delete ps;

    return 0;
}
