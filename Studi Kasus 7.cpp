#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Deklarasi variabel
    double jarakTempuh;
    double konsumsiBahanBakar;
    double hargaBahanBakar;
    double totalBiaya;

    // Input jarak tempuh
    cout << "Jarak Tempuh: ";
    cin >> jarakTempuh;

    // Input konsumsi bahan bakar
    cout << "Konsumsi Bahan Bakar: ";
    cin >> konsumsiBahanBakar;

    // Input harga bahan bakar
    cout << "Harga Bahan Bakar: ";
    cin >> hargaBahanBakar;

    // Menghitung total biaya bahan bakar
    totalBiaya = (jarakTempuh / konsumsiBahanBakar) * hargaBahanBakar;

    // Menampilkan hasil
    cout << fixed << setprecision(2);
    cout << "Total Biaya Bahan Bakar: Rp " << totalBiaya << endl;

    return 0;
}