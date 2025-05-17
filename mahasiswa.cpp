#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;
    string penulis;
    bool dipinjam;

public:
    Buku(string j, string p) : judul(j), penulis(p), dipinjam(false) {}

    // agar hanya bisa dipanggil oleh friend class Petugas
    void tampilInfo() const {
        cout << "Judul: " << judul << ", Penulis: " << penulis 
             << ", Status: " << (dipinjam ? "Dipinjam" : "Tersedia") << endl;
    }

    friend class Petugas; // Hanya Petugas boleh ubah status pinjam
};