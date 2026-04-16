#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    if (n <= 1) {
        cout << "Bukan Prima";
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Bukan Prima";
            return 0;
        }
    }

    cout << "Prima";
    return 0;
}

// Bilangan di cek, jika kurang dari atau sama dengan 1, maka bukan prima
// Untuk mengecek bilangan prima, digunakan for loop yang dimulai dari 2 hingga akar kuadrat dari n
// jika n habis dibagi oleh i, maka n bukan prima

