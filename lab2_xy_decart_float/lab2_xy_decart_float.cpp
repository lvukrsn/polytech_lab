#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;
    cout << "введите x "; cin >> x;
    cout << "Введите y "; cin >> y;

    return 0;
}