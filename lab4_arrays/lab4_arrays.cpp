#include <iostream>
#include <ctime>
#include <locale>
int main()
{
	srand(time(0));
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


	int* maxCols = new int[N]; // массив для хранения максимальных элементов по столбцам
	for (int i = 0;i < N;i++) {
		int maxVal = matrix[i][0]; // инициализация максимального элемента
		int maxCol = 0;
		for (int j = 0;j < N;j++) {
			if (matrix[i][j] > maxVal) {
				maxVal = matrix[i][j];
				maxCol = j;
			}
		}
		maxCols[i] = maxCol; // сохранение индекса столбца с максимальным элементом
	}
	int* minRows = new int[N];
	for (int j = 0;j < N;j++) {
		int minVal = matrix[0][j];
		int minRow = 0;
		for (int i = 1;i < N;i++) {
			if (matrix[i][j] < minVal) {
				minVal = matrix[i][j];
				minRow = i;
			}
		}
		minRows[j] = minRow;
	}
	//std::cout << "\nmaxCols --- ";
	//for (int i = 0;i < N;i++) {
	//	std::cout << maxCols[i] << " ";
	//}

	//std::cout << "\nminRows --- ";
	//for (int j = 0; j < N;j++) {
	//	std::cout << minRows[j] << " ";
	//}
	int* minVals = new int[N];
	int* maxVals = new int[N];
	for (int i = 0;i < N; i++) {
		minVals[i] = matrix[minRows[i]][i];
		maxVals[i] = matrix[i][maxCols[i]];
	}
	for (int i = 0;i < N;i++) {
		int temp = matrix[minRows[i]][i];
		matrix[minRows[i]][i] = matrix[i][maxCols[i]];
		matrix[i][maxCols[i]] = temp;
	}
	std::cout << "\nНовая матрица:" << std::endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0;i < N;i++) {
		delete[] matrix[i];
	}
	delete[] matrix; delete[] maxCols; delete[] minRows;delete[] minVals;delete[] maxVals;
	return 0;
}