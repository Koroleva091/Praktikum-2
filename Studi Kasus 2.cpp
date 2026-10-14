#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hargaBarang;
    double diskon;
    double hargaSetelahDiskon;

    // Input
    cout << "Harga Barang: ";
    cin >> hargaBarang;

    cout << "Diskon: ";
    cin >> diskon;

    // Menghitung harga setelah diskon
    hargaSetelahDiskon = hargaBarang - (hargaBarang * diskon / 100);

    // Output
    cout << fixed << setprecision(2);

    cout << "\nHarga Awal: Rp " << hargaBarang << endl;
    cout << "Diskon: " << diskon << "%" << endl;
    cout << "Harga Setelah Diskon: Rp "
         << hargaSetelahDiskon << endl;

    return 0;
}