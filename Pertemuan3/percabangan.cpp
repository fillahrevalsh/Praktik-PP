#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;
    char operasi;

    cout << "Angka pertama coy : ";
    cin >> angka1;
    cout << "Angka kedua coy : ";
    cin >> angka2;
    cout << "Mau apa nih (+, -, *, /) : ";
    cin >> operasi;

    if (operasi == '+') {
        cout << "Hasil = " << angka1 + angka2;
    } else if (operasi == '-') {
        cout << "Hasil = " << angka1 - angka2;
    } else if (operasi == '*') {
        cout << "Hasil = " << angka1 * angka2;
    } else if (operasi == '/') {
        if (angka2 != 0) {
            cout << "Hasil = " << angka1 / angka2;
        } else {
            cout << "Pembagi tidak boleh bernilai 0";
        }
    } else {
        cout << "maaf ga valid";
    }

    return 0;
}
