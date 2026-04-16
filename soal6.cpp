#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ilangan genap: ";
    cin >> n;

    int jumlah = 0;

    for (int i = 2; i <= n; i += 2) {
        jumlah += i * i;
    }
    cout << jumlah;
    return 0;
}

// Dimulai dengan i = 2, kemudian setiap kali sudah melakukan 1 perulangan, maka, nilai i akan bertambah 2
// Lalu setiap bilangan genap di kuadratkan lalu dijumlahin
// loop berhenti saat i > n
