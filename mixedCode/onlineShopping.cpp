#include <iostream>
using namespace std;

double sum = 0;

double total(double);
double balance(double, double);

int main()
{
	int item = 0, payment_method;
	string username, password;
	string str1[21]{

		"Zalora Shoes(Vintage Design)\t\tRM231\n", "Nike AIR(Limited Edition)\t\t\tRM280\n", "JinJang Hoodies\t\t\t\tRM56\n",
		"SmartWatch MicroWear L8\t\t\tRM97\n"
	};
	string a, b;
	double price = 0, total_loop, bal;

	/*cout << "\n\tWelcome To Beli.com. The Largest Online Shopping In Asia." << endl << endl;
	cout << "\t\tLogin Page" << endl << endl;
	cout << "\t\tUsername: ";
	cin >> username;
	cout << "\t\tPassword: ";
	cin >> password;
	cout << endl << endl << "\tLogin Successful! Welcome " << username << "!" << endl << endl; */
	menuList:
	cout << "\tItems on sale!!" << endl << endl;
	cout << "\tItem\t\t\t\t\tPrice" << endl;
	cout << "\t1. Zalora Shoes(Vintage Design)\t\tRM231" << endl;
	cout << "\t2. Nike AIR(Limited Edition)\t\tRM280" << endl;
	cout << "\t3. JinJang Hoodies\t\t\tRM56" << endl;
	cout << "\t4. SmartWatch MicroWear L8\t\tRM97" << endl << endl;

	char choice = 'Y';
	while (choice == 'y' || choice == 'Y')
	{
		cout << "Choose Item: ";
		cin >> item;

		if (item == 1)
		{
			a = str1[0];
			cout << a;
			cout << "Added To Cart!" << endl << endl;
			price = 231;
		}
		else if (item == 2)
		{
			a = str1[1];
			cout << a;
			cout << "Added To Cart!" << endl << endl;
			price = 280;
		}
		else if (item == 3)
		{
			a = str1[2];
			cout << a;
			cout << "Added To Cart!" << endl << endl;
			price = 56;
		}
		else if (item == 4)
		{
			a = str1[3];
			cout << a;
			cout << "Added To Cart!" << endl << endl;
			price = 97;
		}

		b = a + b;
		total_loop = total(price);
		cout << "Continue with other item? (Y/N): ";
		cin >> choice;
	}

	if (choice == 'N' || choice == 'n')
	{
		char confirm_pay;
		double acc_balance = 5000;
		string bank_username, bank_pass;
		cout << b;
		cout << "\nTotal Price: " << total_loop;
		cout << endl << "Choose Type Of Payment:" << endl;
		cout << "1. Online Banking" << endl;
		cout << "2. Debit/Credit Card" << endl;
		cout << "Payment Method: ";
		cin >> payment_method;
		if (payment_method == 1)
		{
			cout << endl << endl << "\t\tOnline Payment" << endl << endl;
			cout << "\t\tCIMB Login" << endl << endl;
			cout << "\t\tUsername: ";
			cin >> bank_username;
			cout << "\t\tPassword: ";
			cin >> bank_pass;
			cout << endl << endl << "\tAccount Balance: RM"<< acc_balance << endl << endl;
			cout << "\tPayment to: Beli Sdn Bhd" << endl;
			cout << "\tPayment Value: RM" << total_loop << endl;
			confirmation:
			cout << "\tConfirm Payment(Y/N): ";
			cin >> confirm_pay;
			if (confirm_pay == 'Y' || confirm_pay == 'y')
			{
				bal = balance(acc_balance, total_loop);
				if (bal < total_loop)
				{
					cout << endl << endl << "\t\tInsufficient Balance!" << endl << endl;
				}
				else
				{
					cout << endl << endl << "\t\tPayment Successful!" << endl << endl;
					cout << "\tYour account balance is: RM" << bal << endl << endl;
				}
			}
			else if (confirm_pay == 'N' || confirm_pay == 'n')
			{
				cout << endl << endl << "\t\tPayment Cancelled" << endl << endl;
				cout << "\tRedirecting to main page..." << endl << endl;
				goto menuList;
			}
			else
			{
				cout << endl << endl << "\tInvalid Input!" << endl << endl;
				goto confirmation;
			}
			
		}
		else if (payment_method == 2)
		{
			cout << endl << endl << "\t\tDebit/Credit Payment" << endl << endl;
			cout << "\t\tVisa/Mastercard" << endl << endl;
			cout << "\t\tCardholder Name: ";
			cin >> bank_username;
			cout << "\t\tCard Number: ";
			cin >> bank_pass;
			cout << endl << endl << "\tYour account has been deducted." << endl << endl;
			cout << "\tPayment Successful!" << endl << endl;
		}
		else
		{
			cout << endl << endl << "\tInvalid Input!" << endl << endl;
		}
	}
	else
	{
		cout << endl << endl << "\tInvalid Input!" << endl << endl;
	}
	
	

}

double total(double price)
{
	sum = price + sum;
	return sum;
}
double balance(double acc_balance, double total_loop)
{
	double baki;
	baki = acc_balance - total_loop;
	return baki;
}
