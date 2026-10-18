#include <iostream>
#include <locale>

using namespace std; // Чтобы не писать std::cin и std::cout
float calc_sum(float distance, float consumption, float price) { // функции лучше быть float чем int
    return (distance / 100.0f) * consumption * price; // "возврат" по формуле
}
int main() {
    setlocale(LC_ALL, "RUS"); // для кириллицы в консоли
    float distance, consumption, price; // init переменные
    cout << "Предполагаемое расстояние - ";
    cin >> distance; // считываем значение distance
    cout << "Расход бензина - ";
    cin >> consumption; // считываем значение consumption
    cout << "Цена бензина - ";
    cin >> price; // считываем значение price
    cout << "Стоимость путешествия при цене бензина составит "<< calc_sum(distance, consumption, price)<< "рублей"<<endl; // функция в выводе, круто же :D
    system("pause"); // чтобы консоль не закрывалась сразу
    return 0; // 0, потому что программа завершилась успешно
}