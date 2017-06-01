#include <iostream>
#include <climits>
bool is_int(double);

int main()
{
    using namespace std;

    double num;

    cout << "Enter the integer : ";
    cin >> num;
    while (!is_int(num))
    {
        cout << "Not integer. Enter again : ";
        cin >> num;
    }
    int val = int(num);
    cout << val << endl;

    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN) {
        return true;
    }
    return false;
}

