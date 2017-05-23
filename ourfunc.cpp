#include <iostream>

void simon(int);

int main()
{
    using namespace std;
    simon(3);
    cout << "Enter the some number:";
    int count;
    cin >> count;
    simon(count);
    cout << "End!" << endl;

    return 0;
}


void simon(int n) {
    std::cout << "Simon said, knock toes " << n << " times! " << std::endl;
}
