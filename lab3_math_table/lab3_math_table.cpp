#include <iostream>
using namespace std;

int main() {
    for (int el = 0; el < 2; el++) {
        for (int i = 1; i <= 9; i++) {
            for (int j = 2 + el * 4; j <= 5 + el * 4; j++) {
                cout << i << "*" << j << "=";
                if (i * j < 10) cout << " ";
                cout << i * j << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}