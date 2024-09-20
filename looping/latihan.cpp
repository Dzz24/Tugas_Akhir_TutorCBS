#include <iostream>
using namespace std;

void daftarLagu(string lagu[], int banyakLagu) { //fungsi case 2
    cout << "Berikut daftar lagu yang ada :" << endl;
    for (int i = 0; i < banyakLagu; i++) {
        cout << i + 1 << ". " << lagu[i] << endl;
    }
}

int main (){
    int x;  
    string musik[10]= {};
    do {
        cout << "===== Welcome to Program Musik =====" << endl;
        cout << "1. Tambah Musik" << endl;
        cout << "2. Hapus Musik" << endl;
        cout << "3. List Musik" << endl;
        cout << "4. Stop" << endl;
        cin >> x;
        switch(x){
            case 1:
            break;
            case 2:
                int banyakLagu;
                do{
                    cout << "Masukkan jumlah lagu yang diinginkan (maksimal 10): ";
                    cin >> banyakLagu;
                    if(banyakLagu>10){
                        cout<<"Banyak lagu yang anda input tidak valid. Silahkan input ulang\n";
                    }

                }while(banyakLagu>10);
                cin.ignore();
                string lagu[10];
                for (int i=0; i<banyakLagu; i++){
                    cout << "Masukkan judul lagu ke-" <<i+1<<" : ";
                    getline(cin, lagu[i]);
                    }
                daftarLagu(lagu, banyakLagu);
    
                int nomorHapus;
                cout<<"Masukkan nomor lagu yang ingin dihapus (jika tidak ingin menghapus, input 0) : ";
                cin>>nomorHapus;
                if(nomorHapus==0){
                    cout<<"Tidak ada lagu yang dihapus."<<endl;
                }
                else if(nomorHapus<=banyakLagu){
                for (int i=nomorHapus-1; i<banyakLagu - 1; i++) {
                    lagu[i] = lagu[i + 1];
                }

                banyakLagu--;
                cout << "Lagu berhasil dihapus." << endl;
                daftarLagu(lagu, banyakLagu);
                }
                else {
                    cout<<"Input salah.";
                }
            break;
            case 3:
            break;
            case 4:
                cout << "Sistem telah berhenti";
            break;
            default :
                cout << "Input harus 1-4"<< endl;
            break; 
        }
    }
    while(x != 4);
}