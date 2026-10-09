#include <iostream>
#include <cmath> 
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float x;
    cout << "введите х ";
    cin >> x;
	if (fabs(x) >= 1) {
		cout << "введите х СТРОГО 0 < x < 1";
		return 0;
	}
	float prec = 0.0001;
	float sum = 0;
	float first = 1;
	int n = 0;
	while (fabs(first) >= prec) {
		sum += first;
		first *= x;
		n++;
	}
	float control = 1.0 / (1.0 - x);
	cout << "сумма = " << sum << endl;
	cout << "контроль = " << control << endl;
	cout << "разница между контрольным и фактическим значениями = " << fabs(sum - control) << endl;
	cout << "количество членов = " << n << endl;
	system("pause");
	return 0;
}