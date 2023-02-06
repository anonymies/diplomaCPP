#include <iostream>
using namespace std;

int main()
{
	string x[4][6];
	
	for(int i=0; i<1; i++)
	{
		cout << "Enter 24 Stationary Details:" << endl;
		for(int j=0; j<24; j++)
		{
			cin >> x[i][j];
		}
	}
	
	for(int r=0; r<4; r++)
	{
		cout << endl;
		for(int c=0; c<6; c++)
		{
			cout << "\t" << x[r][c];
		}
	}
}
