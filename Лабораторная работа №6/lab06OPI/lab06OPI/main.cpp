#include <iostream>
#include<stdio.h>
#include <windows.h>
#include"case1.h"
#include"case2.h"
#include"case3.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a; char c, f;
    printf("1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������,\n ���� ������ ������ ���������� ��������\0");
    printf("\n2 � ����������� ������� �������� ����� � Windows - 1251 ����� � ��������� � �������� ���������,\n ���� ������ ������ �������� ��������;");
    printf("\n3 � ����� � ������� ���� �������, ���������������� ��������� �����;");
    printf("\n4 � ����� �� ���������.");
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\n������� ������� = ");
    cin >> a;
    switch (a)
    case 1: {
        ascii();
        break;
    case 2:
        win1251();
          break;
    case 3:
        number();
        break;
    case 4:
        return(0);
    }
}

