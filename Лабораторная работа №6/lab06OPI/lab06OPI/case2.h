#include<iostream>
#include <consoleapi2.h>
int win1251() {
	using namespace std;
	string end = "end";
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c;
	cout << "Введите символ кириллицы :"; // -64 -33
	cin >> c;// -32 -1
	for (int i = 0; i <= 50; i++) {
		if (-64 <= c && c <= -33) {
			cout << "0x" << hex << int(c) << endl;
			cout << "Разница между кодами :" << int(c) - 32 << endl;
			cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
			cout << "Введите букву кириллицы: \n"; cin >> c;
		}
		else if (-32 <= c && c <= -1) {
			cout << "0x" << hex << int(c) << endl;
			cout << "Разница между кодами :" << int(c) - 32 << endl;
			cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
			cout << "Введите букву кириллицы: \n"; cin >> c;
		}
		else {
			cout << "Ошибочный ввод" << endl;
			cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
			cout << "Введите букву кириллицы: \n"; cin >> c;
		}
	}
}
