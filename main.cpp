#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int firstNumber;
	cout << "������� ������ �����: ";
	cin >> firstNumber;

	int secondNumber;
	cout << "������� ������ �����: ";
	cin >> secondNumber;
	
	int sum;
	cout << "������� �� �����: ";
	cin >> sum;
	cout << "-----���������----- " << endl;

	if (sum == firstNumber + secondNumber)
	{
		cout << "�����!" << endl;
	}
}