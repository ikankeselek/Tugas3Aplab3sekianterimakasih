#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n : ";
    cin >> n;
    if (n < 1 || n > 10000) {
        cout << "Gk bisa n nya tu, cak tukar";
    }

    else {
        cout << 'H';
        for (int i = 0; i < n; i++) cout << 'o';
        cout << 'r';
        for (int i = 0; i < n; i++) cout << 'e';
        for (int i = 0; i < n; i++) cout << '!';
    
        cout << endl;
    }
    return 0;
}

// Nilai n dibatasi, tidak boleh dibawah 1 atau diatas 10000
// karena "H" dan "r" hanya dicetak sekali, gk perlu perulangan
// "o", "e", dan "!" dicetak berkali kali, jadi perlu perulangan
