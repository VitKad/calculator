// calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	char m;
	cout << "�������� ��������: ";
	cout << "\n";
	cout << "|           ����            |\n";
	cout << "|---------------------------|\n";
	cout << "|  +  |       ��������      |\n";
	cout << "|  -  |       ��������      |\n";  
	cout << "|  *  |      ���������      |\n";
	cout << "|  /  |       �������       |\n";
	cout << "|  &  |  ���������� ������  |\n";
	cout << "|  ^  | �������� � �������  |\n";
	cin >> m;
	cout << "������� ������ �����: ";
	cin >> a;
	if (m != '^' && m != '&')
	{
		cout << "������� ������ �����: ";
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
			cout << "��������� �������� �� ����������";
	}
	system("PAUSE");
}