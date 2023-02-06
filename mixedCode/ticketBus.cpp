#include <iostream>
using namespace std;

double total(double, double);
double balance(double, double);
void menu_picker();

double price = 0, payment, sum = 0, final_balance;
int menu, quantity;
char choice;

int main()
{
	cout << "\nBus Ticket System : TERMINAL BERSEPADU SELATAN - SELANGOR\n";
	cout << "\nChoose Your Destination:" << endl << endl;
	cout << "\t1. Perlis\t\tRM74.00\n\t2. Pulau Pinang\t\tRM78.00\n\t3. Kedah\t\tRM70.00\n";
	cout << "\t4. Kelantan\t\tRM79.00\n\t5. Terengganu\t\tRM73.00\n\t6. Pahang\t\tRM54.00\n";
	cout << "\t7. Negeri Sembilan\tRM18.00\n\t8. Melaka\t\tRM12.00\n\t9. Johor\t\tRM32.00\n";
	cout << "\t10. Perak\t\tRM59.00" << endl << endl;
	
	choice = 'Y';
	while(choice == 'Y' || choice == 'y')
	{
		cout << "\nDestination: ";
		cin >> menu;
		cout << "\nQuantity: ";
		cin >> quantity;
		menu_picker();
		
	}
	if(choice == 'N' || choice == 'n')
	{
		cout << "\n\tTotal Price: \t\tRM" << sum << endl << endl;
		payProcess:
		cout << "\tPayment: \t\tRM";
		cin >> payment;
		
		if(payment < sum)
		{
			cout << "\n\n\tInsufficient Payment!" << endl << endl << endl;
			goto payProcess;
		}
		else
		{
			final_balance = balance(payment, sum);
			cout << "\n\tBalance: \t\tRM" << final_balance << endl << endl;
			cout << "\nPlease take your ticket." << endl << endl;
			cout << "Thank you! Please come again." << endl << endl;
		}
		
		
		
	}
	
}
void menu_picker()
{
	if(menu == 1)
		{
			price = 74 * quantity;
		}
		else if(menu == 2)
		{
			price = 78 * quantity;
		}
		else if(menu == 3)
		{
			price = 70 * quantity;
		}
		else if(menu == 4)
		{
			price = 79 * quantity;
		}
		else if(menu == 5)
		{
			price = 73 * quantity;
		}
		else if(menu == 6)
		{
			price = 54 * quantity;
		}
		else if(menu == 7)
		{
			price = 18 * quantity;
		}
		else if(menu == 8)
		{
			price = 12 * quantity;
		}
		else if(menu == 9)
		{
			price = 32 * quantity;
		}
		else if(menu == 10)
		{
			price = 59 * quantity;
		}
		sum = total(price, sum);
		cout << "\nContinue with adding a trip? (Y/N): ";
		cin >> choice;
}

double total(double price, double sum)
{
	sum = price + sum;
	return sum;
}
double balance(double payment, double sum)
{
	double bal = 0;
	bal = payment - sum;
	return bal;
}
