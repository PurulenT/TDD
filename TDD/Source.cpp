#include <iostream>
#include <cassert>
using namespace std;

short usersChoice(short Choice, short choice)
{
	cout << "��� ���������� ����� ������� 1\n��� �������� ����� ������� 2\n����: ";
	Choice = choice;
	return Choice;
}


void TestChoice()
{
	assert(usersChoice(0, 3) == 3);
	assert(usersChoice(0, 4) == 4);
	cout << "Test OK" << endl;
}


int main()
{
	short Choice;
	short choice;
	setlocale(LC_ALL, "RUS");
	TestChoice();
	return 0;
}