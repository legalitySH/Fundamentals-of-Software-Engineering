#include<iostream>
int ascii() {
    using namespace std;
    setlocale(LC_ALL, "Rus");
    char c = 0;
    string end = "end";
    cout << "������� ��������� �����: \n"; cin >> c;
    for (int i = 1; i <= 50; i++) {
        if (65 <= c && c <= 90) {
            cout << "������� ����� ������: " << int(c) - 32 << endl;
            cout << "��� ������ �������:" << "0x" << int(c) << endl;
            cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "������� ��������� �����: \n"; cin >> c;
        }
        else if (97 <= c && c <= 122) {
            cout << "������� ����� ������: " << int(c) - 32 << endl;
            cout << "��� ������ �������:" << "0x" << int(c) << endl;
            cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "������� ��������� �����: \n"; cin >> c;
        }
        else {
            cout << "��������� ����" << endl;
            cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            cout << "������� ��������� �����: \n"; cin >> c;
        }
    }
}
