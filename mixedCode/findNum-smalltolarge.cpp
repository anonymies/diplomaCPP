#include <iostream>
using namespace std;

int main()
{
	int num[8];
	
	cout << "Enter 5 integers:\n";
	for(int i=0; i<6; i++)
	{
		cin >> num[i];
	}
	
	
	
	for(int i=0; i<6; i++)
	{
		if(num[8] > num[i])
		{
			num[8] = num[i];
		}
	}
	cout << endl << "Smallest integer is: " << num[8] << endl;
	
	for(int i=0; i<6; i++)
	{
		if(num[7] > num[i] && num[8] < num[i])
		{
			num[7] = num[i];
		}	
	}
	cout << endl << "2ND Smallest integer is: " << num[7] << endl;
}
