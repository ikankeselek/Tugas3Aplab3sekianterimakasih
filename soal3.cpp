#include <iostream>
using namespace std;

int main() {
    int A, B; 
    cin >> A >> B; // input tahun awal dan interval.

    int langkah; // untuk menyimpan jumlah perulangan.

    if (B >= 0) { // jika interval positif (maju)
        langkah = B; 
        for (int i = 0; i <= langkah; i++) { 
            int tahun = A + i; // tahun bertambah

            if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) // untuk cek kabisat
                cout << tahun << " kabisat" << endl; 
            else 
                cout << tahun << " bukan kabisat" << endl; 
        }
    } else { // jika interval negatif maka mundur
        langkah = -B; // ubah jadi positif
        for (int i = 0; i <= langkah; i++) { 
            int tahun = A - i; // tahun berkurang

            if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) // unutk cek kabisat
                cout << tahun << " kabisat" << endl; 
            else 
                cout << tahun << " bukan kabisat" << endl; 
        }
    }

    return 0; 
}
