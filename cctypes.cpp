#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;

    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cout << "Enter the characters; end is Ctrl + d:\n";
    while (cin.get(ch))
    {
        if (isalpha(ch)) {
            chars++;
        } else if(isspace(ch)) {
            whitespace++;
        } else if(isdigit(ch)) {
            digits++;
        } else if(ispunct(ch)) {
            punct++;
        } else {
            others++;
        }
        cout << ch;
    }
    cout << "Alphabet " << chars << ", "
         << "Whitespace " << whitespace << ", "
         << "Digits " << digits << ", "
         << "Punct " << punct << ", "
         << "Others " << others << endl;

    return 0;
}
