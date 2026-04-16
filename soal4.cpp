#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n : ";
    cin >> n;
    if (n < 0 || n > 10000) {
        cout << "n harus bilangan positif" << endl;
        return 1;
    }
    cout << 'H';
    for (int i = 0; i < n; i++) cout << 'o';
    cout << 'r';
    for (int i = 0; i < n; i++) cout << 'e';
    for (int i = 0; i < n; i++) cout << '!';

    cout << endl;
    return 0;
}
