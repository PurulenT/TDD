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
	TestFunc();
	return 0;
}