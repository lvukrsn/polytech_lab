#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS"); // поддержка кириллицы в консоли
    float x, y, z; // init x,y,z
    cout << "Введите значение для X: "; //input x
    cin >> x; //ввод x
    cout << "Введите значение для Y: "; // input y
	cin >> y;// ввод y
	cout << "Введите значение для Z: "; // input z
    cin >> z;// ввод z
    float in_cyl = ((y - z) * (y - z) + (z - x) * (z - x) + (x - y) * (x - y))/3.0; // расстояние до центра цилиндра
    float distSph = (x - 3) * (x - 3) + (y - 3) * (y - 3) + (z - 3) * (z - 3); // расстояние до центра сферы

    if (distSph <= 4) {
        if (in_cyl <= 0.25) { // проверка попадания в цилиндр
            cout << "Зона 3" << endl;
			return 0; // return 0 так как программа успешно завершена
        }
        else {
            cout << "Зона 2" << endl; // если точка находится в сфере, но не в цилиндре, то она все равно в зоне 2
            return 0; // return 0 так как программа успешно завершена
        }
    }
    else {
		    cout << "Зона 1" << endl; // если точка находится вне сферы, то она в зоне 1
		    return 0; // return 0 так как программа успешно завершена
        }
    return 0; // return 0 так как программа успешно завершена
}