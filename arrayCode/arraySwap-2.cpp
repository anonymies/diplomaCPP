#include <iostream>
using namespace std;

void display();
int num[10];
int main()
{
	int temp = 0;
	cout << "Enter 10 Num:\n";
	for(int i=0; i<10; i++)
	{
		cin >> num[i];
	}
	cout << "\nBefore Swap: ";
	display();
	temp = num[2];
	num[2] = num[5];
	num[5] = temp;
	cout << "\n\nAfter Swap: ";
	display();
	cout << endl << endl;
}
void display()
{
	for(int i=0; i<10; i++)
	{
		cout << num[i] << " ";
	}
}
