#include <iostream>
using namespace std;

struct account
{
	int acc_no[7];
	char acc_type;
	char name[20];
	double balance;
};

int main()
{
	account acc;
	acc.acc_type = 'S';
	acc.balance = 5275;
	cout << "Enter Name: ";
	cin >> acc.name;
	//cin.get(acc.name, 20);
	cout << "\nEnter account number: ";
	cin >> acc.acc_no[0];
	
	
	cout << "\n\nDisplaying information:" << endl;
	cout << "Name: " << acc.name << endl;
	cout << "Account number: " << acc.acc_no[0] << endl;
	cout << "Account type: " << acc.acc_type << endl;
	cout << "Balance: RM" << acc.balance << endl;
}
