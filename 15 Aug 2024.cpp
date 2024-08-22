#include<iostream>
using namespace std;
void square();
void main()
{
	char choice;
	do
	{
		cout << "ENTER 1 TO START OR PRESS 0 TO EXIT: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			square();
			break;
		case'0':
			break;
		default:
			cout << "INVALID INPUT" << endl;
		}
	} while (choice != '0');
}
void square()
{
	int num;
	cout << "Enter a Number: ";
	cin >> num;
	do
	{
		if (num < 0)
			cout << "INALID INPUT!!" << endl;
	} while (num < 0);
	for (int i = 1; i <= num; i *= 2)
		cout <<"POSSIBLE SQUARES: "<< i << endl;
}