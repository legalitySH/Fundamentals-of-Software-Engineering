#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "1 - ������� ����������� ��� ������ � ������ ������� (�������������� ��������)." << endl;
	cout << "2 - ����������� ��� ������ �� �������� (��������� �����, ����� ��������� � ������, ������ ��������� � ������, ������� ������� � ������)." << endl;
	cout << "3 - ���������� ������� �� �������� ����." << endl;
	cout << "4 - ������������� ����� � �������� ���������: ��������, ������������, ����������, �����������������." << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: {
		calculator();
		break;
	}
	case 2: {
		string_calculator();
		break;
	}
	case 3: {
		tablelist();
		break;
	}
	case 4: {
		bit_calculator();
		break;
	}
	default:
		cout << "��������� ����";
		break;
	}
}