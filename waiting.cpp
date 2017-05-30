#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout << "Enter delay time to second: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "Start countdown.\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "End\a\n";
    return 0;
}
