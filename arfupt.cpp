#include <iostream>

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main()
{
    using namespace std;

    double av[3] = {1112.3, 1542.6, 2227.9};


    const double * (*p1) (const double *, int) = f1;
    auto p2 = f2;

    cout << "Function Pointer: \n";
    cout << "Address\n";
    cout << (*p1) (av, 3) << ": " << * (*p1) (av, 3) << endl;
    cout << p2 (av, 3) << ": " << *p2 (av, 3) << endl;


    const double * (*pa[3]) (const double *, int) = {f1, f2, f3};
    auto pb = pa;
    cout << "\nArrays that are function pointers to elements: \n";
    cout << "Address\n";
    for (int i = 0; i < 3; i++) {
        cout << pa[i] (av, 3) << ": " << *pa[i] (av, 3) << endl;
    }

    cout << "\nPointer to function pointer: \n";
    cout << "Address\n";
    for (int i = 0; i < 3; i++) {
        cout << pb[i] (av, 3) << ": " << *pb[i] (av, 3) << endl;
    }

    cout << "\nPointer to arrays that are function pointers to elements: \n";
    cout << "Address\n";
    auto pc = &pa;
    cout << (*pc)[0] (av, 3) << ": " << * (*pc)[0] (av, 3) << endl;
    const double *(*(*pd)[3]) (const double *, int) = &pa;
    const double * pdb = (*pd)[1] (av, 3);
    cout << pdb << ": " << *pdb << endl;
    cout << (*(*pd)[2]) (av, 3) << ": " << *(*(*pd)[2]) (av, 3) << endl;

    return 0;
}

const double * f1(const double * ar, int n)
{
    return ar;
}

const double * f2(const double ar[], int n)
{
    return ar + 1;
}

const double * f3(const double ar[], int n)
{
    return ar + 2;
}
