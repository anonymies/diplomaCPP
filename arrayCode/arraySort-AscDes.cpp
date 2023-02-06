#include <iostream>
using namespace std;

void display();

int num[10];
int main()
{
	int temp;
	cout << "Enter 10 integer:\n";
		
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}	
	for (int r = 0; r < 10; r++)
	{
		for (int c = r + 1; c < 10; c++)
		{
			if (num[r] > num[c])
			{
				temp = num[r];
				num[r] = num[c];
				num[c] = temp;
			}
		}
	}
	display();
	for (int r = 0; r < 10; r++)
	{
		for (int c = r + 1; c < 10; c++)
		{
			if (num[r] < num[c])
			{
				temp = num[r];
				num[r] = num[c];
				num[c] = temp;
			}
		}
	}
	display();
}
void display()
{
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << "\t";
	}
	cout << endl << endl;
}
