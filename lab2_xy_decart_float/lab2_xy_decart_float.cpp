#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;

    cout << "Введите значение для X: ";
    cin >> x;
    cout << "Введите значение для Y: ";
    cin >> y;

    if (x * x + y * y > 4 && x > 0 && y < 0 && y < -1 && y < -x + 1) {
        cout << "Зона 1\n";
    }
    else if (x * x + y * y > 4 && x > 0 && y < 0 && y < -1 && y >= -x + 1) {
        cout << "Зона 2\n";
    }
    else if (x * x + y * y > 4 && x > 0 && y < 0 && y >= -1) {
        cout << "Зона 3\n";
    }
    else if (x * x + y * y > 4 && x > 0 && y >= 0 && y < x * x - 1) {
        cout << "Зона 4\n";
    }
    else if (x * x + y * y > 4 && x > 0 && y >= 0 && y >= x * x - 1) {
        cout << "Зона 5\n";
    }
    else if (x * x + y * y > 4 && x <= 0 && y >= 0 && y > -x + 1) {
        cout << "Зона 6\n";
    }
    else if (x * x + y * y > 4 && x <= 0 && y >= 0 && y <= -x + 1 && y > x * x - 1) {
        cout << "Зона 7\n";
    }
    else if (x * x + y * y > 4 && x <= 0 && y >= 0 && y <= -x + 1 && y <= x * x - 1) {
        cout << "Зона 8\n";
    }
    else if (x * x + y * y > 4 && x <= 0 && y < 0 && y > -1) {
        cout << "Зона 9\n";
    }
    else if (x * x + y * y > 4 && x <= 0 && y < 0 && y <= -1) {
        cout << "Зона 10\n";
    }
    else if (x * x + y * y <= 4 && x < 0 && y < 0 && y < -1) {
        cout << "Зона 11\n";
    }
    else if (x * x + y * y <= 4 && x >= 0 && y < 0 && y < -1) {
        cout << "Зона 12\n";
    }
    else if (x * x + y * y <= 4 && x > 0 && y < 0 && y >= -1 && y < -x + 1 && y < x * x - 1) {
        cout << "Зона 13\n";
    }
    else if (x * x + y * y <= 4 && x > 0 && y < 0 && y >= -1 && y >= -x + 1 && y < x * x - 1) {
        cout << "Зона 14\n";
    }
    else if (x * x + y * y <= 4 && x > 0 && y >= 0 && y < x * x - 1) {
        cout << "Зона 15\n";
    }
    else if (x * x + y * y <= 4 && x > 0 && y > 0 && y >= x * x - 1) {
        cout << "Зона 16\n";
    }
    else if (x * x + y * y <= 4 && x <= 0 && y > 0 && y > -x + 1) {
        cout << "Зона 17\n";
    }
    else if (x * x + y * y <= 4 && x <= 0 && y > 0 && y <= -x + 1 && y > x * x - 1) {
        cout << "Зона 18\n";
    }
    else if (x * x + y * y <= 4 && x <= 0 && y > 0 && y <= -x + 1 && y <= x * x - 1) {
        cout << "Зона 19\n";
    }
    else if (x * x + y * y <= 4 && x < 0 && y <= 0 && y >= -1 && y < x * x - 1) {
        cout << "Зона 20\n";
    }
    else if (x * x + y * y <= 4 && x < 0 && y <= 0 && y >= -1 && y >= x * x - 1) {
        cout << "Зона 21\n";
    }
    else if (x * x + y * y <= 4 && x >= 0 && y <= 0 && y >= -1 && y >= x * x - 1) {
        cout << "Зона 22\n";
    }
    else {
        cout << "Точка не попала ни в одну из зон\n";
    }

    return 0;
}