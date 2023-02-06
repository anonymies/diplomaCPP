#include<iostream>
using namespace std;

int main()
{
	int hours_perWeek[500], num_of_emp, highly_prod = 0, satisfactory = 0, overpaid = 0;
	double total = 0, average;
	
	cout << "Please enter the number of employees to be inserted in the system: ";
	cin >> num_of_emp;
	
	for(int i=1; i<=num_of_emp; i++)
	{
		cout << endl << "Employee (" << i << ") Enter Hours Work Per Week: ";
		cin >> hours_perWeek[i];
		
		if(hours_perWeek[i] > 55)
		{
			highly_prod += 1; 
		}
		else if(hours_perWeek[i] >= 35 && hours_perWeek[i] <= 55)
		{
			satisfactory += 1; 
		}
		else if(hours_perWeek[i] < 35)
		{
			overpaid += 1; 
		}
		else
		{
			cout << endl << "\tWrong Input!" << endl << endl;
		}
		total += hours_perWeek[i];
		
	}
	/*---------------------------------------------------------------------------------------*/ 
	//Display number of employees based on category
	cout << endl << "The Number Of HIGHLY PRODUCTIVE EMPLOYEES: " << highly_prod << endl;
	cout << endl << "The Number Of SATISFACTORY EMPLOYEES: " << satisfactory << endl;
	cout << endl << "The Number Of OVERPAID EMPLOYEES: " << overpaid << endl;
	/*---------------------------------------------------------------------------------------*/ 
	//highest hours worked
	for(int i = 1; i<=num_of_emp; i++)
	{
		if(hours_perWeek[0] < hours_perWeek[i])
		{
			hours_perWeek[0] = hours_perWeek[i];
		}	
	}
	cout << endl << "The HIGHEST of hours work is: " << hours_perWeek[0] << endl << endl;
	//highest hours worked
	/*---------------------------------------------------------------------------------------*/ 
	//lowest hours worked
	for(int i = 1; i<=num_of_emp; i++)
	{
		if(hours_perWeek[0] > hours_perWeek[i])
		{
			hours_perWeek[0] = hours_perWeek[i];
		}	
	}
	cout << endl << "The LOWEST of hours work is: " << hours_perWeek[0] << endl << endl;
	//lowest hours worked
	/*---------------------------------------------------------------------------------------*/ 
	//average hours worked
	average = total / num_of_emp;
	cout << endl << "The AVERAGE Of Hours Worked is: " << average << endl << endl;
	//average hours worked
	/*---------------------------------------------------------------------------------------*/ 
}
