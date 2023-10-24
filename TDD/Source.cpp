#include <iostream>
#include <cassert>
#include <string>
using namespace std;

short usersChoice(short Choice)
{
	cout << "��� ���������� ����� ������� 1\n��� �������� ����� ������� 2\n����: ";
	cin >> Choice;
	return Choice;
}

string Func(string path, string folderName)
{
	cout << path + "\\";
	while (folderName != "con")
	{
		cout << "������� �������� �����, ��� ���������� ������� con: \n";
		getline(cin, folderName);
		if (folderName == "con") break;
		path = path + '\\';
		path = path + folderName;
	}
	path = path + ".txt";
	cout << path << endl;
	return path;
}

string Disc(short DC)
{
	cout << "���� ���� ����� �� ����� C - ������� 1\n���� ���� ����� �� ����� D - ������� 2\n" << endl;
	cout << DC << endl;
	if (DC == 1)
	{
		return "C:";
	}
	else if (DC == 2)
	{
		return "D:";
	}
	else
	{
		return "error!";
	}
}

void TestDisc()
{
	assert(Disc(2) == "D:");
	assert(Disc(1) == "C:");
	assert(Disc(3) == "error!");
	cout << "Test OK";

	
}

void TestFunc()
{
	assert(Func("C:", "testt") == "C:\\testt.txt");
	cout << "Test OK";
}

void TestChoice()
{
	//assert(usersChoice(0) == Choice);
	//assert(usersChoice(0) == Choice);
	cout << "Test OK" << endl;
}




int main()
{
	short Choice;
	string path = "0";
	string folderName;
	setlocale(LC_ALL, "RUS");
	//TestChoice();
	//TestFunc();
	TestDisc();
	return 0;
}