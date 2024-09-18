#include <iostream>
using namespace std;
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
        switch (x){
            case 1:
            break;
            case 2:
            case 3:
            case 4:
                cout << "Sistem telah berhenti";
            default :
                cout << "Input harus 1-4"<< endl;
        }
    }
    while (x != 4);
}