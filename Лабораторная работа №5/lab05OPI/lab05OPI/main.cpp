#include <iostream>
#include<stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a; char c;
    printf("1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������,\n ���� ������ ������ ���������� ��������\0");
    printf("\n2 � ����������� ������� �������� ����� � Windows - 1251 ����� � ��������� � �������� ���������,\n ���� ������ ������ �������� ��������;");
    printf("\n3 � ����� � ������� ���� �������, ���������������� ��������� �����;");
    printf("\n4 � ����� �� ���������.");
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\n������� ������� = ");
    cin >> a;
    switch (a)
    case 1: {
        cout << "������� ������ ��������� :"; // -64 -33
        cin >> a;
        a = int(a);
        if (65 <=~ a && a <=~ 90 && 97 <=~ a && a <=~ 122) {
            cout << "error" << endl;
        }
        break;
    case 2: {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        char c;
        cout << "������� ������ ��������� :"; // -64 -33
        cin >> c;// -32 -1
        if (-64 <= c && c <= -33) {
            cout << "0x" << hex << int(c) << endl;
            cout << "������� ����� ������ :" << int(c) - 32 << endl;
        }
        else if (-32 <= c && c <= -1) {
            cout << "0x" << hex << int(c) << endl;
            cout << "������� ����� ������ :" << int(c) - 32 << endl;
        }
        else {
            cout << "��������� ����" << endl;
        }
        }
          break;
    case 3:
        cout << "������� ����� :"; cin >> c;
        if (48 <= c && c <= 57) {
            cout << "��� ������� = " << "0x" << hex << int(c) << endl;
        }
        else {
            cout << "��������� ����" << endl;
        }
        break;
    case 4:
        return(0);
    }
    }

