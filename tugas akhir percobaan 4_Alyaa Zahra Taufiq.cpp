#include <iostream>
using namespace std;

struct Node {
    string nama;    
    Node* next;     
};

Node* frontPtr = nullptr;
Node* rearPtr = nullptr;

bool isEmpty() {
    return frontPtr == nullptr;
}

void enqueue(string namaPelanggan) {
    Node* baru = new Node{namaPelanggan, nullptr};
    if (isEmpty()) {
        frontPtr = rearPtr = baru;
    } else {
        rearPtr->next = baru;
        rearPtr = baru;
    }
    cout << namaPelanggan << " telah masuk ke dalam antrian.\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Tidak ada pelanggan dalam antrian.\n";
        return;
    }
    Node* temp = frontPtr;
    cout << temp->nama << " telah selesai dilayani.\n";
    frontPtr = frontPtr->next;
    if (frontPtr == nullptr) rearPtr = nullptr;
    delete temp;
}

void display() {
    if (isEmpty()) {
        cout << "Antrian kosong.\n";
        return;
    }
    cout << "Pelanggan dalam antrian: ";
    for (Node* cur = frontPtr; cur != nullptr; cur = cur->next) {
        cout << cur->nama << " ";
    }
    cout << endl;
}

int main() {
    int pilih;
    string nama;

    do {
        cout << "\n=== SISTEM ANTRIAN KASIR ===\n";
        cout << "1. Tambah Pelanggan\n";
        cout << "2. Layani Pelanggan\n";
        cout << "3. Lihat Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Masukkan nama pelanggan: ";
            cin >> nama;
            enqueue(nama);
        } else if (pilih == 2) {
            dequeue();
        } else if (pilih == 3) {
            display();
        }
    } while (pilih != 4);

    cout << "Program selesai.\n";
    return 0;
}
