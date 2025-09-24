#include <iostream>
#include <string>
using namespace std;

int main() {
    string jadwal[5][4] = {
        {"Matematika", "Bahasa Indonesia", "Fisika", "Olahraga"},     // Senin
        {"Biologi", "Sejarah", "Kimia", "Seni Budaya"},               // Selasa
        {"Bahasa Inggris", "Ekonomi", "Matematika", "Agama"},         // Rabu
        {"Geografi", "Sosiologi", "Komputer", "Bahasa Indonesia"},    // Kamis
        {"Kimia", "Fisika", "Matematika", "Prakarya"}                 // Jumat
    };

    string hari[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};

    cout << "=== Jadwal Pelajaran ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << hari[i] << ": ";
        for (int j = 0; j < 4; j++) {
            cout << jadwal[i][j];
            if (j < 3) cout << " | ";
        }
        cout << endl;
    }

    int pilihHari, pilihJam;
    cout << "\nMasukkan hari (0=Senin, 1=Selasa, 2=Rabu, 3=Kamis, 4=Jumat): ";
    cin >> pilihHari;
    cout << "Masukkan jam ke- (1-4): ";
    cin >> pilihJam;

    if (pilihHari >= 0 && pilihHari < 5 && pilihJam >= 1 && pilihJam <= 4) {
        cout << "\nPelajaran di hari " << hari[pilihHari]
             << " jam ke-" << pilihJam << " adalah: "
             << jadwal[pilihHari][pilihJam - 1] << endl;
    } else {
        cout << "\nInput tidak valid!" << endl;
    }
    return 0;
}