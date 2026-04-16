#include <iostream>
using namespace std;

int main() {
    string kalimat; //untuk menyimpan inputan kalimat.
    char huruf;
    int count = 0; // untuk menghitung jumlah karakter yang terhapus
 
    getline(cin, kalimat);

    cin >> huruf; // input huruf yang ingin dihapus.

    string hasil = ""; // untuk menyimpan kalimat setelah huruf dihapus

    // perulangan untuk mengecek setiap karakter dalam kalimat
    for (int i = 0; i < kalimat.length(); i++) {
        
        // jika karakter saat ini tidak sama dengan huruf yang ingin dihapus
        if (kalimat[i] != huruf) {
            hasil += kalimat[i]; // masukkan ke hasil
        }
        
        //jika sama, maka karakter dihapus.
        else {
            count++; // tambahkan jumlah karakter yg terhapus
        }
    }

    // tampilkan hasil kalimat setelah penghapusan
    cout << hasil << endl;

    // tampilkan jumlah karakter yang terhapus
    cout << "Karakter terhapus = " << count << endl;

    return 0;
}
