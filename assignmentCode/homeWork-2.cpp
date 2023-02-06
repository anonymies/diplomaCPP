#include <iostream>
using namespace std;

struct temperature
{
	int temp[15];
	double total;
	double average;
} degree;

int main()
{
	temperature degree;
	degree.total = 0;
	int cool = 0, mild = 0, hot = 0;
	
	cout << "Please enter 15 temperature values:\n";
	for(int i=0; i<15; i++)
	{
		cin >> degree.temp[i];
		
		if(degree.temp[i] < 18)
		{
			cool += 1;
		}
		else if(degree.temp[i] >= 18 && degree.temp[i] <= 28)
		{
			mild += 1;
		}
		else if(degree.temp[i] > 28)
		{
			hot += 1;
		}
		else
		{
			cout << "\n\nWrong data type input!\n\n";
		}
		
		degree.total += degree.temp[i];
	}
	
	degree.average = degree.total / 15;
	
	cout << "\nAverage Temperature: " << degree.average << endl;
	cout << "\nCOOL Days: " << cool << endl;
	cout << "\nMILD Days: " << mild << endl;
	cout << "\nHOT Days: " << hot << endl << endl;
}
