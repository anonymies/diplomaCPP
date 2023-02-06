#include <iostream>
using namespace std;

int main()
{
	int num[3][5];
	int sum = 0, darab2 = 0, darab3 = 0;
	cout << "Data 1: ";
	for(int i = 0; i < 5; i++)
	{
		num[0][i] = sum + 1;
		cout << num[0][i] << "\t";
		sum++;
	}
	cout << "\nData 2: ";
	for(int i = 0; i<5; i++)
	{
		sum = num[0][i];
		darab2 = sum * 2;
		cout << darab2 << "\t";
		darab2++;
	}
	cout << "\nData 3: ";
	for(int i = 0; i<5; i++)
	{
		sum = num[0][i];
		darab3 = sum * 3;
		cout << darab3 << "\t";
		darab3++;
	}
}
