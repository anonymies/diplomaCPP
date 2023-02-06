#include <iostream>
using namespace std;

void display(int num[3][2]);
int main()
{
	int num [3][2] = { {1,2}, {3,4}, {5,6}};
	display(num);
}
void display(int num[3][2])
{
	cout << "Displaying values:" << endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout << num[i][j] << " ";
		}
	}
}
