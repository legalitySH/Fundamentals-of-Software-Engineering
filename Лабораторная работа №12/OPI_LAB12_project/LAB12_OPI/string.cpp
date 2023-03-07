#include <iostream>
#include <string>

using namespace std;

//������� ��������� �����
inline void string_comparison(string first_str, string second_str)
{
	if (first_str.length() == second_str.length())
	{
		cout << "������ �����" << endl;
	}
	else if (first_str.length() > second_str.length())
	{
		cout << "������ ������ ������ ������" << endl;
	}
	else
	{
		cout << "������ ������ ������ ������" << endl;
	}
}

//������� ������ ��������� � ������
inline int substring_search(string str, string substr)
{
	int check;

	check = str.find(substr, 0);

	return check;
}

inline int string_calculator()
{
	setlocale(LC_ALL, "rus");

	//1. C�������� �����

	cout << "��������� �����" << endl;

	string first_str, second_str;

	cout << "������� ������ ������ " << endl;
	getline(cin, first_str);
	cout << "������� ������ ������" << endl;
	getline(cin, second_str);

	if (first_str.length() == second_str.length())
	{
		cout << "������ �����" << endl;
	}
	else if (first_str.length() > second_str.length())
	{
		cout << "������ ������ ������ ������" << endl;
	}
	else
	{
		cout << "������ ������ ������ ������" << endl;
	}

	//string_comparison(first_str, second_str);

	//2. ����� ��������� � ������

	cout << "����� ��������� � ������" << endl;

	string str, substr;

	cout << "������� ������ " << endl;
	getline(cin, str);
	cout << "������� ���������" << endl;
	getline(cin, substr);

	if (substring_search(str, substr) != -1)
	{
		cout << "��������� �������!" << endl;
	}
	else
	{
		cout << "��������� �� ������� :(" << endl;
	}

	//3. ������ ��������� � ������

	cout << "������ ��������� � ������" << endl;

	string replace;

	cout << "������� ������ " << endl;
	getline(cin, str);
	cout << "������� ���������" << endl;
	getline(cin, substr);

	if (substring_search(str, substr) != -1)
	{
		cout << "��������� �������!" << endl << "������� ������ ���������" << endl;
		getline(cin, replace);
		if (replace.length() <= substr.length())
		{
			str.replace(substring_search(str, substr), substr.length(), replace);
			cout << str << endl;
		}
		else
		{
			cout << "����� ������ ������ ����� ���������!" << endl;
		}
	}
	else
	{
		cout << "��������� �� ������� :(" << endl;
	}

	//4. ������� ������� � ������

	cout << "������� ������� � ������" << endl;
	cout << "������� ������ " << endl;
	getline(cin, str);

	string vowels = "AaEeIiOoUuYy";
	int counter = 0;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < vowels.length(); j++)
		{
			if (str[i]==vowels[j])
			{
				counter++;
			}
		}
	}

	cout << "���������� ������� � ������ " << counter;

	return 0;
	/*�� ������ �����!*/
}