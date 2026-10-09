#include<iostream>
#include<locale>

using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    float distance, consumption, price;
    printf("Предполагаемое расстояние - ");
    scanf_s("%f", &distance);
    printf("Расход бензина - ");
    scanf_s("%f", &consumption);
    printf("Цена бензина - ");
    scanf_s("%f", &price);
    float cost = (distance / 100.0f) * consumption * price;
    printf("Стоимость путешествия при цене бензина %.2f составит %.2f\n", price, cost);
    system("pause");
    return 0;
}