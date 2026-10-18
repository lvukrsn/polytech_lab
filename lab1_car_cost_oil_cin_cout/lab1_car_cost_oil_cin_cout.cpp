#include <iostream>
#include <locale>
#include <iomanip> // Добавили эту библиотеку для форматирования вывода (setprecision)

using namespace std; // Чтобы не писать std::cin и std::cout

int main() {
    setlocale(LC_ALL, "RUS"); // для кириллицы в консоли

    float distance, consumption, price; // init переменные

    cout << "Предполагаемое расстояние - ";
    cin >> distance; // считываем значение distance

    cout << "Расход бензина - ";
    cin >> consumption; // считываем значение consumption

    cout << "Цена бензина - ";
    cin >> price; // считываем значение price

    float cost = (distance / 100.0f) * consumption * price; // расчет стоимости

    // Вывод стоимости с точностью до 2 знаков (аналог %.2f)
    cout << "Стоимость путешествия при цене бензина "<< fixed << setprecision(2) << price<< " составит "<< cost << endl;

    system("pause"); // чтобы консоль не закрывалась сразу
    return 0; // 0, потому что программа завершилась успешно
}