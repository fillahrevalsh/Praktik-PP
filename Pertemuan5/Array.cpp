#include <iostream>

using namespace std;

int main() {

    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
    cout << "Tanggal [9] : " << tanggal[9] << endl;

    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << "Hari : " << hari[4] << endl << endl;

    char namaP[7] = {'k', 'a', 'i'};
    cout << "Nama panggilan (char) : " << namaP << endl;

    string namaL = "Kai Penakluk Dunia";
    cout << "Nama lengkap (string) : " << namaL << endl << endl;

    int i = 0;
    while (i < 7) {
        cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }
    cout << endl;


    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "Panjang array hari adalah : " << panjang << endl;
    cout << "Kai Menaklukan Dunia dalam " << panjang << " hari." << endl << endl;


    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    for (int j = 0; j < jumlahHari; j++) {
        cout << "Masukkan penjualan porsi Chicken Katsu hari ke-" << (j + 1) << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }

    rataRata = (float)totalPenjualan / jumlahHari;
    cout << "\nTotal porsi Chicken katsu yang telah terjual : " << totalPenjualan << " porsi." << endl;
    cout << "Rata-rata penjualan Chicken katsu selama " << jumlahHari << " hari adalah : " << rataRata << " porsi." << endl << endl;


    int matriks[100][100];
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "Masukkan jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;

    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << "Baris " << x + 1 << ", Kolom " << y + 1 << " : ";
            cin >> matriks[x][y];
        }
    }


    cout << "Kedai Chicken Katsu buka selama " << jumlahBaris << " bulan di tanggal tertentu:" << endl;
    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
