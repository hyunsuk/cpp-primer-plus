#include <iostream>

template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T *a, T *b, int n);

struct job {
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job &j1, job &j2);

void Show(int const a[]);
void Show(job &j);

const int LIM = 8;

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << i << ", " << j << endl;
    Swap(i, j);
    cout << i << ", " << j << endl;

    int d1[LIM] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[LIM] = {0, 6, 2, 0, 1, 9, 6, 9};
    Show(d1);
    Show(d2);
    Swap(d1, d2, LIM);
    Show(d1);
    Show(d2);

    job sue = {"Susan yaffee", 73000.60, 7};
    job sidney = {"Sidney Teffee", 78060.72, 9};

    Show(sue);
    Show(sidney);
    Swap(sue, sidney);
    Show(sue);
    Show(sidney);
    return 0;
}

template <typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n) {
    T temp;
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

template <> void Swap<job>(job &j1, job &j2) {
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(int const a[]) {
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < LIM; i++) {
        cout << a[i];
    }
    cout << endl;
}

void Show(job &j) {
    using namespace std;
    cout << j.name << ": " << j.floor << " floor" << endl;
    cout << "$" << j.salary << endl;
}
