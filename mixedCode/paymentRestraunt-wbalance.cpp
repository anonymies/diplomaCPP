#include <iostream>
using namespace std;

double total(double, int);
double balance(double, double);
double menu_picker();

double food_price, price, sum, payment; 
int menu, quantity;
char choice;

int main()
{
	double bal;
	sum = 0;
	
	cout << "\nRestaurant Ali Baba Food Menu:\n";
	cout << "1. Roti Canai = RM1.00\n2. Maggi Goreng = RM4.50\n3. Nasi Goreng = RM5.00\n4. Mee Goreng Mamak = RM5.50\n5. Roti Nan Cheese = RM4.80" << endl << endl;
	
	choice = 'Y';
	while(choice == 'Y' || choice == 'y')
	{
		food_price = 0;
		cout << "\nMenu: ";
		cin >> menu;
		cout << "Quantity: ";
		cin >> quantity;
 		menu_picker();
	}
	if(choice == 'N' || choice == 'n')
	{
		cout << "\n\nThe total price is: RM" << sum << endl;
		cout << "\n\tPayment: RM";
		cin >> payment;
		bal = balance(payment, sum);
		cout << "\n\n\tBalance: RM" << bal << endl << endl << endl;
	}
	
	
}

double total (double food_price, int quantity)
{
	double sum = 0;
	sum = food_price * quantity;
	return sum;
}
double balance (double payment, double sum)
{
	double baki = 0;
	baki = payment - sum;
	return baki;
}
double menu_picker()
{
	if(menu == 1)
 		{
 			food_price = 1.00;
	 		price = total(food_price, quantity);
 		}
 		else if(menu == 2)
 		{
	 		food_price = 4.50;
	 		price = total(food_price, quantity);
 		}
 		else if(menu == 3)
 		{
	 		food_price = 5.00;
	 		price = total(food_price, quantity);
 		}
 		else if(menu == 4)
 		{
	 		food_price = 5.50;
	 		price = total(food_price, quantity);
 		}
		else if(menu == 5)
 		{
	 		food_price = 4.80;
	 		price = total(food_price, quantity);
 		}
 		else
 		{
	 		cout << "\nWrong input! Please enter the menu: ";
 		}
 		sum = price + sum;
 		cout << "\n\nContinue with next menu? (Y/N): ";
 		cin >> choice;
}
