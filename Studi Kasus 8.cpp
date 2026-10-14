#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double panjang, lebar, tinggi;
    double hargaCat;
    double luasDinding, jumlahCat, totalBiaya;

    cout << "Panjang ruangan : ";
    cin >> panjang;
    cout << "Lebar ruangan   : ";
    cin >> lebar;
    cout << "Tinggi ruangan  : ";
    cin >> tinggi;
    cout << "Harga cat per liter : ";
    cin >> hargaCat;

    luasDinding = 2 * (panjang + lebar) * tinggi;
    jumlahCat = luasDinding / 10;
    totalBiaya = jumlahCat * hargaCat;

    cout << endl;
    cout << fixed << setprecision(2);

    cout << left << setw(35) << "Luas dinding" << ": " << luasDinding << " m^2" << endl;
    cout << left << setw(35) << "Jumlah liter cat yang dibutuhkan" << ": " << jumlahCat << " liter" << endl;
    cout << left << setw(35) << "Total biaya cat" << ": Rp " << totalBiaya << endl;

    return 0;
}