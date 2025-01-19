#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int firstNumber;
	cout << "Введите первое число: ";
	cin >> firstNumber;

	int secondNumber;
	cout << "Введите второе число: ";
	cin >> secondNumber;
	
	int sum;
	cout << "Введите их сумму: ";
	cin >> sum;
	cout << "-----Проверяем----- " << endl;

	if (sum == firstNumber + secondNumber)
	{
		cout << "Верно!" << endl;
	}
}