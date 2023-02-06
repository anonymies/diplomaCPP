#include <iostream>
using namespace std;

struct temperature
{
	
	int temp;
	
} degree;


int main()
{
	temperature degree[15];
	int cool = 0, mild = 0, hot = 0;
	double total = 0, average;
	
	cout << "Please enter 15 temperature values:\n";
	for(int i=0; i<15; i++)
	{
		cin >> degree[i].temp;
		
		if(degree[i].temp < 18)
		{
			cool += 1;
		}
		else if(degree[i].temp >= 18 && degree[i].temp <= 28)
		{
			mild += 1;
		}
		else if(degree[i].temp > 28)
		{
			hot += 1;
		}
		else
		{
			cout << "\n\nWrong data type input!\n\n";
		}
		
		total += degree[i].temp;
	}
	
	average = total / 15;
	
	cout << "\nAverage Temperature: " << average << endl;
	cout << "\nCOOL Days: " << cool << endl;
	cout << "\nMILD Days: " << mild << endl;
	cout << "\nHOT Days: " << hot << endl << endl;
}
