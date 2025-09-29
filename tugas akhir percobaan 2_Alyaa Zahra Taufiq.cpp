#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    string nama[n];
    int nilai[n];

    cout << "Masukkan nama dan nilai mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << endl;
        cout << "Nama : ";
        cin >> nama[i];
        cout << "Nilai: ";
        cin >> nilai[i];
    }

    for (int i = 1; i < n; i++) {
        int tempNilai = nilai[i];
        string tempNama = nama[i];
        int j = i - 1;

        while (j >= 0 && nilai[j] > tempNilai) {
            nilai[j + 1] = nilai[j];
            nama[j + 1] = nama[j];
            j--;
        }
        nilai[j + 1] = tempNilai;
        nama[j + 1] = tempNama;
    }

    cout << "\nDaftar nilai mahasiswa setelah diurutkan (Ascending):\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << " - " << nilai[i] << endl;
    }

    return 0;
}