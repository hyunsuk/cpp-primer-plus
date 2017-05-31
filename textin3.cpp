#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter the characters; end is Ctrl + d:\n";
    while (cin.get(ch))
    {
        cout << ch;
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}
