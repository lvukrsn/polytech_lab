#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int el=0; el<7; el++) {
        for (int i=1; i<=9; i++) {
            for (int j=6 + el*4; j<=12+el*4; j++) {
                cout << i << setw(1) << "*" << setw(4) << j << setw(2) << "=" << setw(3) << i * j << "  ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}