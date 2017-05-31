#include <iostream>

int main()
{
    using namespace std;

    char ch;

    cout << "Enter the characters, end character is '.':\n";
    cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n') {
            cout << ch;
        } else {
            cout << ++ch;
        }
        cin.get(ch);
    }
    cout << endl << "I'm sorry~!\n";

    return 0;
}
