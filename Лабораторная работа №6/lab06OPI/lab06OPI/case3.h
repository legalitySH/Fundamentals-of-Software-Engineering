#include<iostream>
int number() {
    setlocale(LC_ALL, "Rus");
    using namespace std;
    char c;
    string end = "end";
    cout << "������� ����� :"; cin >> c;
    for (int i = 1; i <= 50; i++) {
        if (48 <= c && c <= 57) {
            cout << "��� ������� = " << "0x" << hex << int(c) << endl;
            cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "������� �����: \n"; cin >> c;
        }
        else {
            cout << "��������� ����" << endl;
            cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "������� �����: \n"; cin >> c;
        }
    }

}