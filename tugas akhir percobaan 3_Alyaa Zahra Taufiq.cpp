#include <iostream>
#include <string>
using namespace std;

int main() {
    string siswa[] = {"Alya", "Budi", "Citra", "Dewi", "Fajar", "Gina", "Hadi"};
    int n = 7;
    string cari;
    bool ketemu = false;

    cout << "Daftar siswa: ";
    for(int i = 0; i < n; i++) {
        cout << siswa[i] << " ";
    }

    cout << "\nMasukkan nama yang ingin dicari: ";
    cin >> cari;

    for(int i = 0; i < n; i++) {
        if(siswa[i] == cari) {
            cout << "Nama " << cari << " ditemukan pada indeks ke-" << i << endl;
            ketemu = true;
            break;
        }
    }

    if(!ketemu) {
        cout << "Nama " << cari << " tidak ditemukan dalam daftar." << endl;
    }

    return 0;
}