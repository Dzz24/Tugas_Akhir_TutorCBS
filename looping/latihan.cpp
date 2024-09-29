#include <iostream>
#include <vector>
#include <string>

using namespace std;

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

int main() {
    
}