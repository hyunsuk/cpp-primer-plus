#include <iostream>

const int ArSize = 8;
int sum_arr(int array[], int length);
using namespace std;

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    cout << "array address = " << cookies;
    cout << ", sizeof cookies = " << sizeof cookies << endl;
    int sum = sum_arr(cookies, 3);

    cout << "first three poeple eat " << sum << endl;
    sum = sum_arr(cookies + 4, 4);

    cout << "last four poeple eat " << sum << endl;
    return 0;
}

int sum_arr(int array[], int length)
{
    int total = 0;
    cout << array << " = array , ";
    for (int i = 0; i < length; i++) {
        total += array[i];
    }

    return total;
}
