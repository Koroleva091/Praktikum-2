#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Deklarasi variabel
    double suhu1, suhu2, suhu3, suhu4, suhu5;
    double rataRata;

    // Input suhu setiap hari
    cout << "Suhu Hari 1: ";
    cin >> suhu1;

    cout << "Suhu Hari 2: ";
    cin >> suhu2;

    cout << "Suhu Hari 3: ";
    cin >> suhu3;

    cout << "Suhu Hari 4: ";
    cin >> suhu4;

    cout << "Suhu Hari 5: ";
    cin >> suhu5;

    // Menghitung rata-rata suhu
    rataRata = (suhu1 + suhu2 + suhu3 + suhu4 + suhu5) / 5;

    // Menampilkan hasil dengan 1 angka desimal
    cout << fixed << setprecision(1);
    cout << "Rata-rata Suhu: " << rataRata << endl;

    return 0;
}