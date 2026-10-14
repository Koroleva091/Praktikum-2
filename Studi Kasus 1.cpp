#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    int jamKerja;
    long long tarifPerJam, gajiTotal;

    cout << "Nama Karyawan: ";
    getline(cin, nama);

    cout << "Jam Kerja: ";
    cin >> jamKerja;

    cout << "Tarif Per Jam: ";
    cin >> tarifPerJam;

    gajiTotal = jamKerja * tarifPerJam;

    cout << "\n";
    cout << left
         << setw(15) << "Nama"
         << setw(15) << "Jam Kerja"
         << setw(20) << "Tarif Per Jam"
         << setw(15) << "Gaji Total" << endl;

    cout << "------------------------------------------------------------"
         << endl;

    cout << left
         << setw(15) << nama
         << setw(15) << jamKerja
         << setw(20) << tarifPerJam
         << setw(15) << gajiTotal << endl;

    return 0;
}