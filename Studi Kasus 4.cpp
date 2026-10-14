#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rupiah, kurs, dollar;

    cout << "Jumlah Rupiah: ";
    cin >> rupiah;

    cout << "Kurs Konversi: ";
    cin >> kurs;

    dollar = rupiah / kurs;

    cout << fixed << setprecision(2);
    cout << "Jumlah Rupiah: Rp " << rupiah << endl;
    cout << "Jumlah Dollar: $ " << dollar << endl;

    return 0;
}