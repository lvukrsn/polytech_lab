#include <iostream>
#include <ctime>
#include <locale>
int main()
{
	setlocale(LC_ALL, "RUS"); // для кириллицы в консоли
	int N; // размер стороны матрицы
	std::cout << "введите размер стороны матрицы: ";
	std::cin >> N;
	int** matrix = new int* [N]; // создание двумерного массива
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N]; // создание строк матрицы
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 10; // заполнение матрицы случайными числами от 0 до 9
		}
	}
	std::cout << "\nИсходная матрица:" << std::endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	int max = matrix[0][0]; // инициализация максимального элемента
	int maxCol = 0;
	for (int j = 1; j < N; j++) {
		if (matrix[0][j] > max) {
			max = matrix[0][j];
			maxCol = j;
		}
	}
	int min = matrix[0][0]; // инициализация минимального элемента
	int minCol = 0;
	for (int j = 1; j < N; j++) {
		if (matrix[0][j] < min) {
			min = matrix[0][j];
			minCol = j;
		}
	}
}