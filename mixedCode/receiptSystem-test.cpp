#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

double total(double, int);

int main()
{
	double price1, price2, price3;
	char choice = 'Y';
	int menu, quantity;
	time_t current_time;
	current_time = time(0);
	
	double price = 0, total_price = 0, add_price = 0;
	cout << "\nChoose item in the lists:\n";
	cout << "\t1. Pencil\n\t2. Eraser\n\t3. Ruler\n\t4. Correction Tape" << endl;
	while(choice == 'Y' || choice == 'y')
	{
		cout << "\tEnter item code: ";
		cin >> menu;
		if(menu == 1)
		{
			price = 1.20;
			cout << "\n\tQuantity: ";
			cin >> quantity;
		}
		else if(menu == 2)
		{
			price = 0.80;
			cout << "\n\tQuantity: ";
			cin >> quantity;
		}
		else if(menu == 3)
		{
			price = 2.30;
			cout << "\n\tQuantity: ";
			cin >> quantity;
		}
		else if(menu == 4)
		{
			price = 5.50;
			cout << "\n\tQuantity: ";
			cin >> quantity;
		}
		add_price = total(price, quantity);
		total_price = total_price + add_price;
		cout << "Continue with next item? (Y/N): ";
		cin >> choice;
		cout << endl;
	}
	if (choice == 'N' || choice == 'n')
	{
		//Print Receipt
		cout << "\n\n";
		cout << setw(40) << "COOP-MART KPMB\n" << setw(42) << "43000, KPM Beranang\n";
		cout << setw(39) << "Cashier: Haziq" << endl << endl;
		cout << setw(45) << ctime(&current_time) << endl << endl;
		cout << setw(42) << "--Receipt of Payment--" << setw(15) << "" << endl << endl;
		cout << setw(25) << "Total Price:" << setw(25) << "RM" << total_price << endl << endl;
	}

}

double total(double price, int quantity)
{
	double sum = 0;
	sum = price * quantity;
	return sum;
}
