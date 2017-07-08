#include <iostream>

template <typename T>
void Swap(T &a, T &b);


int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << i << ", " << j << endl;
    Swap(i, j);
    cout << i << ", " << j << endl;

    double x = 24.5;
    double y = 81.7;
    cout << x << ", " << y << endl;
    Swap(x, y);
    cout << x << ", " << y << endl;
}

template <typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
