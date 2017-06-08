#include <iostream>
#include <array>
#include <string>

const int SEASONS = 4;
const std::array<std::string, SEASONS> Sname = {
   "Spring", "Summer", "Fall", "Winter"
};

void fill(std::array<double, SEASONS> *pa);
void show(std::array<double, SEASONS> da);

int main()
{
    std::array<double, SEASONS> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}


void fill(std::array<double, SEASONS> *pa)
{
    using namespace std;
    for (int i = 0; i < SEASONS; i++) {
       cout << Sname[i] << " costs : ";
       cin >> (*pa)[i];
    }
}

void show(std::array<double, SEASONS> da)
{
    using namespace std;
    double total = 0.0;
    cout << "\ncost by season\n";
    for (int i = 0; i < SEASONS; i++) {
       cout << Sname[i] << " : $" << da[i] << endl;
       total += da[i];
    }
    cout << "total cost : $" << total << endl;
}
