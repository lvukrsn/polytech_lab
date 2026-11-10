#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int N;
    cout << "Введите размер массива: ";
    cin >> N;
    if (N <= 0) {
        cout << "размер массива должен быть больше 0" << endl;
        return 0;
    }
    int* arr = new int[N];
    cout << "Введите " << N << " элементов массива:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << "Ваш массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxCount = 0; 
    int mostFrequent = arr[0];
    for (int i = 0; i < N; i++) {
        int currentCount = 0; 
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequent = arr[i];
        }
    }
    cout << "Число, которое встречается чаще всего: " << mostFrequent << endl;
    cout << "Количество его повторений: " << maxCount << endl;
    delete[] arr;
    system("pause");
    return 0;
}