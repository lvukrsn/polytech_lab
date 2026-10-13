#include<iostream>
#include<locale>

using namespace std; //чтобы не писать std:: перед cout и cin
int main() {
	setlocale(LC_ALL, "RUS"); // для кириллицы в консоли
    float distance, consumption, price; //init переменные
    printf("Предполагаемое расстояние - "); // ввод distance
    scanf_s("%f", &distance); // считываем значение distance
    printf("Расход бензина - ");
    scanf_s("%f", &consumption); // считываем значение consumption
    printf("Цена бензина - ");
    scanf_s("%f", &price); // считываем значение price
    float cost = (distance / 100.0f) * consumption * price; // расчет стоимости
    printf("Стоимость путешествия при цене бензина %.2f составит %.2f\n", price, cost); //  вывод стоимости
	system("pause"); //чтобы консоль не закрывалась сразу
    return 0; // 0, потому что программа завершилась успешно
}