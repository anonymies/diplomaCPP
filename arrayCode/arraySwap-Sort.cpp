#include <iostream>
using namespace std;

void display();

int subject[4] = { 84, 70, 96, 72 };
double total = 0;
int main()
{
	int temp = 0;
	display();
	
	temp = subject[1];
	subject[1] = subject[3];
	subject[3] = temp;
	cout << "\n\nTotal Marks: " << total << endl;
	display();

	for (int r = 0; r < 4; r++)
	{
		for (int c = r + 1; c < 4; c++)
		{
			if (subject[r] > subject[c])
			{
				temp = subject[r];
				subject[r] = subject[c];
				subject[c] = temp;
			}
		}
	}
	display();
}
void display()
{
	cout << "\n\nStudent Marks:\n\tBM\tBI\tSCIENCE\tMATH\n\t";
	for (int i = 0; i < 4; i++)
	{
		total += subject[i];
		cout << subject[i] << "\t";
	}
}
