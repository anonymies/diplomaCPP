#include <iostream>
using namespace std;

double CALCULATE(double, double, int);

int main()
{
	int code, guest_no;
	double fares = 0, Total_fare = 0, tax = 0;
	string destination;
	
	cout << "Destination Code:\n1. Bandung\tFARE/Person: RM137\tAirport TAX/Per Person: RM58\n";
	cout << "2. Bandung\tFARE/Person: RM230\tAirport TAX/Per Person: RM58\n";
	cout << "3. Bandung\tFARE/Person: RM550\tAirport TAX/Per Person: RM70\n";
	
	cout << "\nDestination code: ";
	cin >> code;
	cout << "\nNo of guest: ";
	cin >> guest_no;
	
	if(code == 1)
	{
		destination = "Bandung\n";
		fares = 137;
		tax = 58;
	}
	else if(code == 2)
	{
		destination = "Ho Chi Minh City\n";
		fares = 230;
		tax = 58;
	}
	else if(code == 3)
	{
		destination = "Guangzhou\n";
		fares = 550;
		tax = 70;
	}
	else
	{
		cout << "\n\nWrong input!\n\n";
	}
	
	Total_fare = CALCULATE(fares, tax, guest_no);
	
	cout << "\nDestination: " << destination;
	cout << "\nFare per person: " << fares;
	cout << "\nTax per person: " << tax;
	cout << "\nTotal fee: " << Total_fare << endl << endl;
	return 0;
}

double CALCULATE(double fares, double tax, int guest_no)
{
	double sum = 0;
	sum = (fares + tax) * guest_no;
	return sum;
}
