#include <iostream>
using namespace std;

struct pizzaZ
{
	int diameter;
	double price;
}p;

void displayTotal(pizzaZ);

int main()
{
	struct pizzaZ p;
	
	cout << "========================================" << endl;
	cout << "Diameter\t\tPricePerDiameter" << endl;
	cout << "========================================" << endl;
	cout << "20-30 cm\t\tRM 0.60" << endl;
	cout << "31-40 cm\t\tRM 0.80" << endl;
	cout << "41-55 cm\t\tRM 1.20" << endl;
	cout << "========================================" << endl << endl;
	cout << "Enter the diameter of pizza: ";
	cin >> p.diameter;
	
	if(p.diameter >=20 && p.diameter <= 30)
	{
		p.price = 0.60;
	}
	else if(p.diameter >=31 && p.diameter <= 40)
	{
		p.price = 0.80;
	}
	else if(p.diameter >=41 && p.diameter <= 55)
	{
		p.price = 1.20;
	}
	else
	{
		cout << "\nInput not valid! Please try again..\n\n";
	}
	
	displayTotal(p);
}
void displayTotal(pizzaZ p)
{
	double grandPrice = 0;
	grandPrice = p.diameter * p.price;
	cout << "\n\n========================================" << endl;
	cout << "The price of " << p.diameter << "cm of pizza is: RM" << grandPrice << endl;
	cout << "========================================" << endl << endl;
}
