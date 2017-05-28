#include <iostream>
#include <cstring>

int main()
{

    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";


    cout << "Hi! My name is " << name2;
    cout << "! What is your name?\n";
    cin >> name1;

    cout << "Ah, hello " << name1 << "! Your name is ";
    cout << strlen(name1) << " characters but\n";
    cout << "Saved in a " << sizeof(name1) << " bytes array.\n";
    cout << "The name stats with " << name1[0] << ".\n";

    name2[3] = '\0';
    cout << "The first three characters of my name are: ";
    cout << name2 << endl;

    return 0;
}
