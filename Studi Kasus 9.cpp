#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left;
    cout << setw(10) << "Meter" << setw(15) << "Centimeter" << setw(15) << "Millimeter" << setw(15) << "Kilometer" << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << setw(10) << 1 << setw(15) << 100 << setw(15) << 1000 << setw(15) << 0.001 << endl;
    cout << setw(10) << 2 << setw(15) << 200 << setw(15) << 2000 << setw(15) << 0.002 << endl;
    cout << setw(10) << 3 << setw(15) << 300 << setw(15) << 3000 << setw(15) << 0.003 << endl;
    cout << setw(10) << 4 << setw(15) << 400 << setw(15) << 4000 << setw(15) << 0.004 << endl;
    cout << setw(10) << 5 << setw(15) << 500 << setw(15) << 5000 << setw(15) << 0.005 << endl;
    cout << setw(10) << 6 << setw(15) << 600 << setw(15) << 6000 << setw(15) << 0.006 << endl;
    cout << setw(10) << 7 << setw(15) << 700 << setw(15) << 7000 << setw(15) << 0.007 << endl;
    cout << setw(10) << 8 << setw(15) << 800 << setw(15) << 8000 << setw(15) << 0.008 << endl;
    cout << setw(10) << 9 << setw(15) << 900 << setw(15) << 9000 << setw(15) << 0.009 << endl;
    cout << setw(10) << 10 << setw(15) << 1000 << setw(15) << 10000 << setw(15) << 0.010 << endl;

    return 0;
}