#include <iostream>
using namespace std;

struct QWERTY
{
	string name[100], id[100];
	int OT_hour[10];
	double salary, OT_amount[10], total_salary[100];
}employee;

void OVERTIME(QWERTY);
void NETSALARY(QWERTY);
void DISPLAY(QWERTY);

int main()
{
	double ot[5], net_salary[5];
	QWERTY employee, name[5], id[5], OT_hour[5], OT_amount[5], total_salary[5];
	
	cout << "QWERTY IT COMPANY SALARY SYSTEM\n\n";
	cout << "Input Employee Details:\n\n";
	
	for(int i=0; i<5; i++)
	{
		cout << "\n\tEmployee " << i+1 << endl << "\tName: ";
		cin >> employee.name[i];
		cout << "\tID: ";
		cin >> employee.id[i];
		cout << "\tOvertime Hour: ";
		cin >> employee.OT_hour[i];
		
		
	}
	OVERTIME(employee);
	NETSALARY(employee);
	DISPLAY(employee);
	return 0;
}
void OVERTIME(QWERTY employee)
{
	for(int i=0; i<5; i++)
	{
		if(employee.OT_hour[i] >= 1 && employee.OT_hour[i] <= 200)
		{
			employee.OT_amount[i] = employee.OT_hour[i] * 4.5;
		}
		else if(employee.OT_hour[i] > 200)
		{
			employee.OT_amount[i] = 200 * 4.5;
		}
		else
		{
			cout << "\n\nInvalid Input\n\n";
		}
	}
}
void NETSALARY(QWERTY employee)
{
	employee.salary = 2500;
	for(int i=0; i<5; i++)
	{
		employee.total_salary[i] = employee.OT_amount[i] + employee.salary;
	}
}
void DISPLAY(QWERTY employee)
{
	for(int i=0; i<5; i++)
	{
		cout << "\n\tEmployee " << i+1 << endl << "\tNet Salary: ";
		cout << employee.total_salary[i] << endl;
	}
	
}
