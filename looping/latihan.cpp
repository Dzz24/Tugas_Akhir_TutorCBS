#include <iostream>
using namespace std;

const int MAX_MUSIK = 10;
string tambahMusik(string judulLagu, string listMusik[], int &index) {
    if(index >= MAX_MUSIK){
        return "List musik sudah penuh!";
    } 
    else{
        listMusik[index] = judulLagu;
        index++;
        return "Musik berhasil ditambahkan!";
    }
}

int main (){
    int x;
    string judulLagu;
    string pesan;
    string listMusik[10];
    int index = 0;

    do {
        cout << "===== Welcome to Program Musik =====" << endl;
        cout << "1. Tambah Musik" << endl;
        cout << "2. Hapus Musik" << endl;
        cout << "3. List Musik" << endl;
        cout << "4. Stop" << endl;
        cin >> x;
        switch (x){
            case 1:
                cout << "Masukkan judul lagu: ";
                cin>>judulLagu;
                pesan = tambahMusik(judulLagu, listMusik, index);
                cout << pesan << endl;
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            cout << "Sistem telah berhenti";
            break;
            default :
                cout << "Input harus 1-4"<< endl;
        }
    }
    while (x != 4);
}