#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter the characters; end character is #:\n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}
