#include <iostream>
using namespace std;

double CALCULATE(double, double);
double PAYMENT(double, double);
void display();
void getdata();

int code;
char mykad;

int main()
{
	double price = 0, Total_fee = 0, discount = 0, balance = 0, user_payment = 0;
	string description;

	display();
	getdata();
	
	
	if(code == 1 && mykad == 'N')
	{
		description = "2 Adults and 3 Kids\n";
		price = 70;
		discount = 1;
	}
	else if(code == 2 && mykad == 'N')
	{
		description = "Adult\n";
		price = 30;
		discount = 1;
	}
	else if(code == 3 && mykad == 'N')
	{
		description = "Kid\n";
		price = 15;
		discount = 1;
	}
	else if(code == 4 && mykad == 'N')
	{
		description = "Senior Citizen\n";
		price = 20;
		discount = 1;
	}
	else if(code == 1 && mykad == 'Y')
	{
		description = "2 Adults and 3 Kids\n";
		price = 70;
		discount = 0.9;
	}
	else if(code == 2 && mykad == 'Y')
	{
		description = "Adult\n";
		price = 30;
		discount = 0.9;
	}
	else if(code == 3 && mykad == 'Y')
	{
		description = "Kid\n";
		price = 15;
		discount = 0.9;
	}
	else if(code == 4 && mykad == 'Y')
	{
		description = "Senior Citizen\n";
		price = 20;
		discount = 0.9;
	}
	else
	{
		cout << "\n\nWrong input!\n\n";
	}
	
	Total_fee = CALCULATE(price, discount);
	cout << "\nTotal fee: " << Total_fee ;
	cout << "\nDescription: " << description;
	
	balance = PAYMENT(Total_fee, user_payment);
	cout << "\nBalance: RM" << balance << endl << endl;

	
	
	return 0;
}

double CALCULATE(double price, double discount)
{
	double sum = 0;
	sum = price * discount;
	return sum;
}
double PAYMENT(double Total_fee, double user_payment)
{
	double sum = 0;
	cout << "\nPayment: RM";
	cin >> user_payment;
	sum = user_payment - Total_fee;
	return sum;
}
void display()
{
	cout << "Package Code:\n";
	cout << "1. 2 Adults and 3 Kids\tPrice: RM70\n";
	cout << "2. Adult\t\tPrice: RM30\n";
	cout << "3. Kid\t\t\tPrice: RM15\n";
	cout << "4. Senior Citizen\tPrice: RM20\n";
}
void getdata()
{
	cout << "\nPackage code: ";
	cin >> code;
	cout << "\nMykad (Y/N)?: ";
	cin >> mykad;
}
