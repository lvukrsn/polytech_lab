#include <iostream>
#include <ctime>    // для функции time()
#include <cstdlib>  // для rand() и srand()
#include <locale>

using namespace std;
double fillAndAverage(int* arr, int size) {
    double sum = 0.0;
    cout << "массив (размер " << size << "): ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 21;
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    return sum / size;
}

int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int n1 = 5;
    int n2 = 8;
    int* arr1 = new int[n1];
    int* arr2 = new int[n2];
    double avg1 = fillAndAverage(arr1, n1);
    cout << "Среднее значение 1-го массива: " << avg1 << "\n\n";
    // --- Работа со вторым массивом ---
    double avg2 = fillAndAverage(arr2, n2);
    cout << "Среднее значение 2-го массива: " << avg2 << "\n\n";
    delete[] arr1;
    delete[] arr2;
    system("pause");
    return 0;
}