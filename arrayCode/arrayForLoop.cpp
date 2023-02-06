#include <iostream>
using namespace std;

int main()
{
	string fruit[4] = {"|ORANGE|", "|APPLE|", "|GRAPE|", "|PAPAYA|"};
	
	//cout << fruit[0] << endl << fruit[1] << endl << fruit[2] << endl << fruit[3] << endl;
	
	for(int i=0; i<4; i++)
	{
		string display = fruit[i];
		cout << display << endl;
	}
	
}
