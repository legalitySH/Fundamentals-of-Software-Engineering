#include<iostream>
int one() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "1.	Открыть Visual Studio" << endl;
	cout << "2.	Нажать на кнопку «Создание проекта»" << endl;
	cout << "3.	В диалогом окне, которое находиться справа выбрать пункт «Пустой проект»" << endl;
	cout << "4.	Нажать «Далее»" << endl;
	return(0);
}