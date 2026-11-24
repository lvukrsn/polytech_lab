
#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    double d, r;

    cout << "Введите координаты точки X, Y, Z: ";
    cin >> x >> y >> z;

    // Расстояние от точки до центра сферы
    d = (x - 3) * (x - 3) +
        (y - 3) * (y - 3) +
        (z - 3) * (z - 3);

    if (d > 4) {
        cout << "Зона 1 - точка вне сферы";
    }
    else {
        // Расстояние от точки до оси цилиндра
        r = d - ((x + y + z - 9) * (x + y + z - 9)) / 3;

        if (r <= 0.25) {
            cout << "Зона 3";
        }
        else {
            cout << "Зона 2";
        }
    }

    return 0;
}
