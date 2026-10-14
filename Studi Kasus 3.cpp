#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double panjang, lebar, tinggi;
    double volume, luasPermukaan;

    // Input
    cout << "Panjang: ";
    cin >> panjang;

    cout << "Lebar: ";
    cin >> lebar;

    cout << "Tinggi: ";
    cin >> tinggi;

    // Perhitungan
    volume = panjang * lebar * tinggi;

    luasPermukaan = 2 * (
        (panjang * lebar) +
        (panjang * tinggi) +
        (lebar * tinggi)
    );

    // Output
    cout << "\n";
    cout << left
         << setw(15) << "Panjang"
         << setw(12) << "Lebar"
         << setw(12) << "Tinggi"
         << setw(12) << "Volume"
         << setw(20) << "Luas Permukaan" << endl;

    cout << "-----------------------------------------------------------"
         << endl;

    cout << right
         << setw(15) << panjang
         << setw(12) << lebar
         << setw(12) << tinggi
         << setw(12) << volume
         << setw(20) << luasPermukaan << endl;

    return 0;
}