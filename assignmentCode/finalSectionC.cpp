#include <iostream>
using namespace std;

void GRADE();

int points;
double mark, results, total = 0;
string sub_code, status;
char grade;
	
int main()
{
	char c = 'Y';
	while(c == 'Y' || c == 'y')
	{
		cout<< "Subject code: ";
		cin >> sub_code;
		cout<< "\nMark: ";
		cin >> mark;
		GRADE();
		total += points;
		cout << "\nGrade: " << grade << "\nStatus: " << status << "\nPoint: " << points << endl;
		cout << "\n\nNext Subject?(Y/N): ";
		cin >> c;
	}
	if(c == 'N' || c == 'n')
	{
		cout<< "Total point: " << total << endl << endl;
	}
	else
	{
		return 0;
	}
	
}

void GRADE()
{
	if(mark >= 80 && mark <= 100)
	{
		points = 4;
		status = "Distinction\n";
		grade = 'D';
	}
	else if(mark >= 60 && mark <= 79)
	{
		points = 3;
		status = "Merit\n";
		grade = 'M';
	}
	else if(mark >= 45 && mark <= 59)
	{
		points = 2;
		status = "Pass\n";
		grade = 'P';
	}
	else if(mark >= 0 && mark <= 44)
	{
		points = 0;
		status = "Fail\n";
		grade = 'F';
	}
	else
	{
		cout<< "\nWrong input!\n";
	}
}
