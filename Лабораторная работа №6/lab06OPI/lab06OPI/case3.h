#include<iostream>
int number() {
    setlocale(LC_ALL, "Rus");
    using namespace std;
    char c;
    string end = "end";
    cout << "Введите цифру :"; cin >> c;
    for (int i = 1; i <= 50; i++) {
        if (48 <= c && c <= 57) {
            cout << "Код символа = " << "0x" << hex << int(c) << endl;
            cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "Введите цифру: \n"; cin >> c;
        }
        else {
            cout << "Ошибочный ввод" << endl;
            cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "Введите цифру: \n"; cin >> c;
        }
    }

}