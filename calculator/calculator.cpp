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
					cout << "��������: " << additon(a, b) << endl;
						break;
			}
		case '-':
			{
					cout << "���������: " << sub(a, b) << endl;
						break;
			}
		case '*':
			{
					cout << "���������: " << mult(a, b) << endl;
						break;
			}
		case '/':
			{
					cout << "�������: " << division(a,b) << endl;
						break;
			}
		case '&':
			{
					cout << "������: " << root(a) << endl;
						break;
			}
		case '^':
			{
					cout << "�������: " << square(a) << endl;
						break;
			}
		default:
			cout << "��������� �������� �� ����������";
	}
	system("PAUSE");
}