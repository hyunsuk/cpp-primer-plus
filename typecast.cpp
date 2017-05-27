#include <iostream>

int main()
{

    using namespace std;

    int auks, bats, coots;

    auks = 19.99 + 11.99;  // 31

    bats = (int) 19.99 + (int) 11.99;  // 30, c style
    coots = int (19.99) + int (11.99);  // 30, c++ style

    cout << "Auks = " << auks << ", Bats = " << bats;
    cout << ", Coots = " << coots << endl;

    char ch = 'Z';

    cout << ch << " ascii code is ";
    cout << int (ch) << endl;
    cout << "Yes, " << ch << " ascii code is ";
    cout << static_cast<int> (ch) << endl;

    return 0;
}
