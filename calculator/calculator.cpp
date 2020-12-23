// calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	char m;
	cout << "Выберите действие: ";
	cout << "\n";
	cout << "|           Меню            |\n";
	cout << "|---------------------------|\n";
	cout << "|  +  |       Сложение      |\n";
	cout << "|  -  |       Разность      |\n";  
	cout << "|  *  |      Умножение      |\n";
	cout << "|  /  |       Деление       |\n";
	cout << "|  &  |  Квадратный корень  |\n";
	cout << "|  ^  | Возвести в степень  |\n";
	cin >> m;
	cout << "Введите первое число: ";
	cin >> a;
	if (m != '^' && m != '&')
	{
		cout << "Введите второе число: ";
		cin >> b;
	}

	switch (m)
	{
		case '+':
			{
						break;
			}
		case '-':
			{
						break;
			}
		case '*':
			{
						break;
			}
		case '/':
			{
						break;
			}
		case '&':
			{
						break;
			}
		case '^':
			{
						break;
			}
		default:
			cout << "Выбранной операции не существует";
	}
	system("PAUSE");
}