#include<iostream>
int ascii() {
    using namespace std;
    setlocale(LC_ALL, "Rus");
    char c = 0;
    string end = "end";
    cout << "Введите латинскую букву: \n"; cin >> c;
    for (int i = 1; i <= 50; i++) {
        if (65 <= c && c <= 90) {
            cout << "Разница между кодами: " << int(c) - 32 << endl;
            cout << "Код вашего символа:" << "0x" << int(c) << endl;
            cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "Введите латинскую букву: \n"; cin >> c;
        }
        else if (97 <= c && c <= 122) {
            cout << "Разница между кодами: " << int(c) - 32 << endl;
            cout << "Код вашего символа:" << "0x" << int(c) << endl;
            cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "Введите латинскую букву: \n"; cin >> c;
        }
        else {
            cout << "Ошибочный ввод" << endl;
            cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "Введите латинскую букву: \n"; cin >> c;
        }
    }
}
