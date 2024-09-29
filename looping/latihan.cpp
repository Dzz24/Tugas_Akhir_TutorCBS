#include <iostream>
#include <vector>
#include <string>

using namespace std;

void tambahMusik(vector<string> &daftarMusik) {
    string judul;
    cout << "Masukkan judul lagu: ";
    cin.ignore();
    getline(cin, judul);
    daftarMusik.push_back(judul);
    cout << "Lagu '" << judul << "' berhasil ditambahkan." << endl;
}

void hapusMusik(vector<string> &daftarMusik) {
    if (daftarMusik.empty()) {
        cout << "Daftar musik kosong, tidak ada yang bisa dihapus." << endl;
        return;
}
    int index;
    cout << "Masukkan nomor lagu yang ingin dihapus: ";
    cin >> index;

    if (index > 0 && index <= daftarMusik.size()) {
        cout << "Lagu '" << daftarMusik[index - 1] << "' dihapus." << endl;
        daftarMusik.erase(daftarMusik.begin() + (index - 1));
    } 
    else {
        cout << "Nomor tidak valid." << endl;
    }
}

void lihatDaftarMusik(const vector<string> &daftarMusik) {
    if (daftarMusik.empty()) {
        cout << "Daftar musik kosong." << endl;
} 
    else {
        cout << "Daftar musik:" << endl;
        for (int i = 0; i < daftarMusik.size(); i++) {
        cout << i + 1 << ". " << daftarMusik[i] << endl;
}
}
}

int main() {
    vector<string> daftarMusik;
    int pilihan;

    do {
        cout << "  << endlMenu: " << endl;
        cout << "1. Tambah musik" << endl;
        cout << "2. Hapus musik" << endl;
        cout << "3. Lihat daftar musik" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahMusik(daftarMusik);
                break;
            case 2:
                hapusMusik(daftarMusik);
                break;
            case 3:
                lihatDaftarMusik(daftarMusik);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi." << endl;
                break;
        }
    } while (pilihan != 4);

    return 0;
}