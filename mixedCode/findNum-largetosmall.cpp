#include <iostream>
using namespace std;

int main()
{
	int num[5];
	
	cout << "Enter 5 integers:\n";
	for(int i=0; i<5; i++)
	{
		cin >> num[i];
	}
	
	for(int i=0; i<5; i++)
	{
		if(num[0] < num[i])
		{
			num[0] = num[i];
		}	
	}
	cout << endl << "Largest integer is: " << num[0] << endl;
	
	for(int i=0; i<5; i++)
	{
		if(num[0] > num[i])
		{
			num[0] = num[i];
		}
	}
	cout << endl << "Smallest integer is: " << num[0] << endl;
}
