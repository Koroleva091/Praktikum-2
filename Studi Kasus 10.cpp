#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double angka1, angka2, angka3, angka4, angka5;
    double rataRata, standarDeviasi;

    cout << "Angka 1: ";
    cin >> angka1;
    cout << "Angka 2: ";
    cin >> angka2;
    cout << "Angka 3: ";
    cin >> angka3;
    cout << "Angka 4: ";
    cin >> angka4;
    cout << "Angka 5: ";
    cin >> angka5;

    rataRata = (angka1 + angka2 + angka3 + angka4 + angka5) / 5;

    standarDeviasi = sqrt(
        (
            (angka1 - rataRata) * (angka1 - rataRata) + (angka2 - rataRata) * (angka2 - rataRata) +
            (angka3 - rataRata) * (angka3 - rataRata) + (angka4 - rataRata) * (angka4 - rataRata) + (angka5 - rataRata) * (angka5 - rataRata)
        ) / 4
    );

    cout << endl;
    cout << fixed << setprecision(2);

    cout << left << setw(20) << "Rata-rata" << ": " << rataRata << endl;
    cout << left << setw(20) << "Standar Deviasi" << ": " << standarDeviasi << endl;

    return 0;
}