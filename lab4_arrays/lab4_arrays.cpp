#include <iostream>
#include <ctime>
#include <locale>
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RUS");									// для кириллицы в консоли
	int N;														// размер стороны матрицы
	std::cout << "введите размер стороны матрицы: "; std::cin >> N; // иниц размера стороны матрицы
	int** matrix = new int* [N];								// создание двумерного массива
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];									// создание строк матрицы
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 10;							// заполнение матрицы случайными числами от 0 до 9
		}
	}


	std::cout << "\nИсходная матрица:" << std::endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout << matrix[i][j] << " ";					// вывод исходной матрциы
		}
		std::cout << std::endl;
	}


	int* maxCols = new int[N];									// массив для хранения максимальных элементов по столбцам
	for (int i = 0;i < N;i++) {
		int maxVal = matrix[i][0];								// инициализация максимального элемента
		int maxCol = 0;
		for (int j = 0;j < N;j++) {
			if (matrix[i][j] > maxVal) {						
				maxVal = matrix[i][j];							// запись макс знач каждого столбца
				maxCol = j;
			}
		}
		maxCols[i] = maxCol;									// сохранение индекса столбца с максимальным элементом
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
	//std::cout << "\nmaxCols --- ";							для отладки - вывод maxCols
	//for (int i = 0;i < N;i++) {
	//	std::cout << maxCols[i] << " ";
	//}

	//std::cout << "\nminRows --- ";							для отладки - вывод minrows
	//for (int j = 0; j < N;j++) {
	//	std::cout << minRows[j] << " ";
	//}
	int* minVals = new int[N];									//промежуточные переменные minVals и maxRows
	int* maxVals = new int[N];
	for (int i = 0;i < N; i++) {
		minVals[i] = matrix[minRows[i]][i];						// замена в исхзодной матрице элементов
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
			std::cout << matrix[i][j] << " ";					//вывод новой матрицы
		}
		std::cout << std::endl;
	}
	for (int i = 0;i < N;i++) {
		delete[] matrix[i];										// очистка памяти
	}
	delete[] matrix; delete[] maxCols; delete[] minRows;delete[] minVals;delete[] maxVals;	//очистка памяти
	return 0;													// return 0 так как программа успешно завергшена
}