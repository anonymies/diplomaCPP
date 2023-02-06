#include <iostream>
using namespace std;

int main()
{
	double umur2030, umur2020;
	string details[2] = {"Test", "BCS1906-???"};
	double age[3] = {2030, 2001, 2020};
	
	
	cout << "Name: " << details[0] << "\nID: " << details[1] << endl;
	umur2020 = age[2] - age[1];
	cout << "AGE: " << umur2020 << endl << endl;
	umur2030 = age[0] - age[1];
	cout << "AGE in 2030: " << umur2030 << endl << endl;
	
}
