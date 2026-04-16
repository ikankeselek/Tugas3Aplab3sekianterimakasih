#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; //untuk input jumlah suku yang ingin ditampilkam 

    int nilai = 1; // untuk set nilai awal adalah 1.

    for (int i = 1; i <= n; i++) {
        cout << nilai << " "; //untuk menampilkan nilai saat ini
        
        // polanya adalah +5 dan +3
        // lalu jika urutan ke-i adalah ganjil, maka +5
        if (i % 2 == 1) {
            nilai += 5;
        } else {     // lalu jika urutan ke-i adalah genap, maka +3
            nilai += 3;
        }
    }

    return 0;
}
