#include <iostream>
#include<stdio.h>
#include <windows.h>
#include<string>
using namespace std;
void error() {
	cout << "Ошибочный ввод" << endl;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a; char c, f;
	printf("1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании,\n если введен символ латинского алфавита\0");
	printf("\n2 – определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании,\n если введен символ русского алфавита;");
	printf("\n3 – вывод в консоль кода символа, соответствующего введенной цифре;");
	printf("\n4 – выход из программы.");
	printf("\n----------------------------------------------------------------------------------------------");
	printf("\nВведите вариант = ");
	cin >> a;
	switch (a)
    case 1: {
		cout << "Введите букву в прописном написании: \n"; cin >> c;
		cout << "Введите букву в cтрочном написании: \n"; cin >> f;
		if (65 <= c && c <= 90) {
			cout << "Код вашего символа:" << "0x" << int(c) << endl;
		}
		else {
			error();
		}
		if (97 <= f && f <= 122) {
			cout << "Код вашего символа:" << "0x" << int(f) << endl;
		}
		else {
			error();
		}
		cout << "Разница между кодами: " << int(f) - int(c) << endl;
		break;
	case 2: {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		char c; char f;
		cout << "Введите прописной символ кириллицы :"; cin >> c;
		cout << "Введите строчный символ кириллицы :"; cin >> f;
		
		//if (int(f) - int(c) != 20) {
		//	error();
		//	break;
		//}

		if (-64 <= c && c <= -33) {
			cout  << hex << int(c) << endl;
		}
		else {
			error();
		}
		if (-32 <= f && f <= -1) {
			cout  << hex << int(f) << endl;
		}
		else {
			error();
		}
		cout << "Разница между кодами :" << hex << int(f) - int(c) << endl;
	}
		  break;
	case 3:
		cout << "Введите цифру :"; cin >> c;
		if (48 <= c && c <= 57) {
			cout << "Код символа = " << "0x" << hex << int(c) << endl;
		}
		else {
			error();
		}
		break;
	case 4:
		return(0);
	}
}