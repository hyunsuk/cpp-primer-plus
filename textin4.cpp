#include <iostream>

int main()
{
    using namespace std;
    int ch;
    int count = 0;
    cout << "Enter the characters; end is Ctrl + d:\n";
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}
