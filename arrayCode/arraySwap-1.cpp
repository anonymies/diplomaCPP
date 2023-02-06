#include <iostream>
using namespace std;

int main()
{
	int num[10];
	int temp = 0;
	
	cout << "Enter 10 Num:\n";
	for(int i=0; i<10; i++)
	{
		cin >> num[i];
	}
	cout << "\nBefore Swap: ";
	for(int i=0; i<10; i++)
	{
		cout << num[i] << " ";
	}
	temp = num[2];
	num[2] = num[5];
	num[5] = temp;
	cout << "\n\nAfter Swap: ";
	for(int i=0; i<10; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl << endl;
}
