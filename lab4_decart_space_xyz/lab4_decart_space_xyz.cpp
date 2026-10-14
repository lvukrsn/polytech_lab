#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS"); // поддержка кириллицы в консоли
    float x, y, z; // init x,y,z
    cout << "Введите значение для X: "; //input x
    cin >> x;
    cout << "Введите значение для Y: "; // input y
    cin >> y;
	cout << "Введите значение для Z: "; // input z
    cin >> z;
    return 0; // return 0 так как программа успешно завершена
}