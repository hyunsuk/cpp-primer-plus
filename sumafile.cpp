#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    using namespace std;

    char filename[SIZE];
    ifstream inFile;

    cout << "Enter the data file name: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if (!inFile.is_open()) {
        cout << "Could not open file " << filename << endl;
        cout << "Exit the program.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0;

    /* inFile >> value; */

    /* while (inFile.good()) { */
    while (inFile >> value) {
        ++count;
        sum += value;
        /* inFile >> value; */
    }

    if (inFile.eof()) {
        cout << "End of file.\n";
    } else if (inFile.fail()) {
        cout << "Data type don't match!\n";
    } else {
        cout << "UnKnow error.\n";
    }

    if (count == 0) {
        cout << "No data.\n";
    } else {
        cout << "Number of items: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Avg: " << sum / count << endl;
    }

    inFile.close();

    return 0;
}
