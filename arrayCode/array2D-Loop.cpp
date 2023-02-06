#include <iostream>
using namespace std;

int main()
{
	int x[2][3] = {{1,2,3}, {4,5,6}};
	
	for(int r=0; r<2; r++)
	{
		cout << endl;
		for(int c=0; c<3; c++)
		{
			cout << x[r][c];
		}
	}
}
