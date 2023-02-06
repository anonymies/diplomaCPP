#include <iostream>
using namespace std;


int main()
{
	int num[5];
	int j = 1;
	double total=0, average=0;
	
	cout << "Enter\n";

	for (int i = 0; i < 4; i++)
	{
		cout << "Num" << j << "= ";
		cin >> num[i];
		j++;
		total += num[i];
	}
	average = total / 4;
	cout << "\nTotal = " << total << endl;
	cout << "Average = " << average << endl;
}

