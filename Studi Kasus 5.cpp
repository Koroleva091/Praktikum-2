#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Deklarasi variabel
    double height;
    double weight;
    double bmi;

    // Input tinggi badan
    cout << "Height : ";
    cin >> height;

    // Input berat badan
    cout << "Weight : ";
    cin >> weight;

    // Menghitung BMI
    bmi = weight / ((height / 100) * (height / 100));

    // Menampilkan hasil BMI
    cout << fixed << setprecision(2);
    cout << "BMI : " << bmi << endl;

    // Menentukan status berat badan
    if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Status Berat Badan Ideal : Ya" << endl;
    } else {
        cout << "Status Berat Badan Ideal : Tidak" << endl;
    }

    return 0;
}