#include <iostream>
#include<stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a; char c;
    printf("1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании,\n если введен символ латинского алфавита\0");
    printf("\n2 Ц определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании,\n если введен символ русского алфавита;");
    printf("\n3 Ц вывод в консоль кода символа, соответствующего введенной цифре;");
    printf("\n4 Ц выход из программы.");
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\n¬ведите вариант = ");
    cin >> a;
    switch (a)
    case 1: {
        cout << "¬ведите символ кириллицы :"; // -64 -33
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
        cout << "¬ведите символ кириллицы :"; // -64 -33
        cin >> c;// -32 -1
        if (-64 <= c && c <= -33) {
            cout << "0x" << hex << int(c) << endl;
            cout << "–азница между кодами :" << int(c) - 32 << endl;
        }
        else if (-32 <= c && c <= -1) {
            cout << "0x" << hex << int(c) << endl;
            cout << "–азница между кодами :" << int(c) - 32 << endl;
        }
        else {
            cout << "ќшибочный ввод" << endl;
        }
        }
          break;
    case 3:
        cout << "¬ведите цифру :"; cin >> c;
        if (48 <= c && c <= 57) {
            cout << " од символа = " << "0x" << hex << int(c) << endl;
        }
        else {
            cout << "ќшибочный ввод" << endl;
        }
        break;
    case 4:
        return(0);
    }
    }

