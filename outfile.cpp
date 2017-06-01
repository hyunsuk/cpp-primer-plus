#include <iostream>
#include <fstream>

const int SIZE = 50;

int main()
{
    using namespace std;

    char automoblie[SIZE];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");
    cout << "Enter car model and maker: ";
    cin.getline(automoblie, SIZE);
    cout << "Enter nonrigid type: ";
    cin >> year;
    cout << "Enter the purchase price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "model and maker: " << automoblie << endl;
    cout << "nonrigid type: " << year << endl;
    cout << "purchase price: " << a_price << endl;
    cout << "now price: " << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "model and maker: " << automoblie << endl;
    outFile << "nonrigid type: " << year << endl;
    outFile << "purchase price: " << a_price << endl;
    outFile << "now price: " << d_price << endl;

    outFile.close();

    return 0;
}
