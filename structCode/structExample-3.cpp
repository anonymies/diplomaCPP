#include <iostream>
using namespace std;

struct studDetails
{
	string name;
	string id;
	int age;
} student;

int main ()
{
	studDetails student[10];
	int counter = 1;;
	
	cout << "Please enter student details below:-" << endl;
	for(int i=0; i<2; i++)
	{
		cout << "Student " << i+1 << endl;
		cout << "Enter Student Name: ";
		cin >> student[i].name;
		cout << "Enter Student ID: ";
		cin >> student[i].id;
		cout << "Enter Student Age: ";
		cin >> student[i].age;
		cout << endl; 
	}

	cout << "\nStudent Details:-" << endl;
	for(int i=0; i<2; i++)
	{
		cout << "\tStudent " << counter << endl;
		cout << "\tStudent name: " << student[i].name << endl;
		cout << "\tStudent ID: " << student[i].id << endl;
		cout << "\tStudent Age: " << student[i].age << endl << endl;
		counter++;
	}
	
}
