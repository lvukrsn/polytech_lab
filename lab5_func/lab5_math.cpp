#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

// Функция принимает x (по значению), а возвращает посчитанную сумму (float)
float calculateSeries(float x) {
    float eps = 0.0001;
    float sum = 0;
    float term = 1;
    int n = 0;

    while (fabs(term) >= eps) {
        sum = term + sum;
        term *= x;
        n++;
    }

    // Возвращаем результат!
    return sum;
}

int main() {
    setlocale(LC_ALL, "RUS");
    float x;
    cout << "введите х: ";
    cin >> x;

    if (fabs(x) >= 1) {
        cout << "введите х от -1 до 1" << endl;
        return 0;
    }

    // Вызываем функцию и сохраняем результат
    float result = calculateSeries(x);

    // Считаем контрольное значение
    float control = 1.0 / (1.0 - x);

    cout << "Сумма = " << result << endl;
    cout << "Контроль = " << control << endl;
    cout << "Разница = " << fabs(result - control) << endl;

    system("pause");
    return 0;
}