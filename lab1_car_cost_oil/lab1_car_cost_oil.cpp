#include <iostream>
#include <locale>
#include <iomanip> 

#define swagakruto

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    float distance, consumption, price;

#ifdef swagakruto
    printf("printf Предполагаемое расстояние - ");
    scanf_s("%f", &distance);
    printf("Расход бензина - ");
    scanf_s("%f", &consumption);
    printf("Цена бензина - ");
    scanf_s("%f", &price);

    float cost = (distance / 100.0f) * consumption * price;
    printf("Стоимость путешествия при цене бензина %.2f составит %.2f рублей\n", price, cost);

#else
    cout << "cin cout Предполагаемое расстояние - ";
    cin >> distance;
    cout << "Расход бензина - ";
    cin >> consumption;
    cout << "Цена бензина - ";
    cin >> price;

    float cost = (distance / 100.0f) * consumption * price;
    cout << "Стоимость путешествия при цене бензина "
        << fixed << setprecision(2) << price
        << " рублей составит " << cost << " рублей" << endl;
#endif
    system("pause");
    return 0;
}