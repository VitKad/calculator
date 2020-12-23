#include "stdafx.h"
#include "addition.h"
#include "root.h"
#include "division.h"
#include "mult.h"
#include "sub.h"
#include "square.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
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
					cout << "Полученное число: " << additon(a, b) << endl;
						break;
			}
		case '-':
			{
					cout << "Полученное число: " << sub(a, b) << endl;
						break;
			}
		case '*':
			{
					cout << "Полученное число: " << mult(a, b) << endl;
						break;
			}
		case '/':
			{
					cout << "Полученное число: " << division(a,b) << endl;
						break;
			}
		case '&':
			{
					cout << "Полученное число: " << root(a) << endl;
						break;
			}
		case '^':
			{
					cout << "Полученное число: " << square(a) << endl;
						break;
			}
		default:
			cout << "Выбранной операции не существует";
	}
	system("PAUSE");
}