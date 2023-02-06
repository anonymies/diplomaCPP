#include <iostream>
using namespace std;

struct ClientDetails
{
	string client_name, client_id, client_phone;
	int client_age[25];
	double monthly_salary;
	int oldest, youngest, total_avg;
}client;

int old(ClientDetails);
int young(ClientDetails);
double average(ClientDetails);

int main()
{
	ClientDetails client;

	int num = 1, oldest, youngest;
	double total_avg;

	cout << "CLIENT INFORMATION\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "\nClient " << num << endl;
		cout << "\nName: ";
		cin >> client.client_name;
		cout << "ID Number: ";
		cin >> client.client_id;
		cout << "Age: ";
		cin >> client.client_age[i];
		cout << "Phone number: ";
		cin >> client.client_phone;
		cout << "Monthly salary : RM ";
		cin >> client.monthly_salary;
		cout << "================================" << endl;
		num++;
	}

	
	total_avg = average(client);
	oldest = old(client);
	youngest = young(client);
	

	cout << "Oldest age : " << oldest << endl;
	cout << "Youngest age : " << youngest << endl;
	cout << "Average age : " << total_avg << endl;


}
int old(ClientDetails client)
{

	int oldest = client.client_age[0];

	for (int i = 0; i < 3; i++)
	{
		if (client.client_age[0] < client.client_age[i])
		{
			oldest = client.client_age[i];
		}
	}

	//int age = 0;
	return oldest;
}
int young(ClientDetails client)
{
	int youngest = client.client_age[0];

	for (int i = 0; i < 3; i++)
	{
		if (client.client_age[0] > client.client_age[i])
		{
			youngest = client.client_age[i];
		}
	}

	//int age = 0;
	return youngest;
}
double average(ClientDetails client)
{
	double total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += client.client_age[i];
		return total;
	}
	double avg = 0;
	avg = total / 3;
	return avg;
	
}
