#include<iostream>
#include <consoleapi2.h>
int win1251() {
	using namespace std;
	string end = "end";
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c;
	cout << "������� ������ ��������� :"; // -64 -33
	cin >> c;// -32 -1
	for (int i = 0; i <= 50; i++) {
		if (-64 <= c && c <= -33) {
			cout << "0x" << hex << int(c) << endl;
			cout << "������� ����� ������ :" << int(c) - 32 << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
			cout << "������� ����� ���������: \n"; cin >> c;
		}
		else if (-32 <= c && c <= -1) {
			cout << "0x" << hex << int(c) << endl;
			cout << "������� ����� ������ :" << int(c) - 32 << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
			cout << "������� ����� ���������: \n"; cin >> c;
		}
		else {
			cout << "��������� ����" << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
			cout << "������� ����� ���������: \n"; cin >> c;
		}
	}
}
