#include <iostream>
using namespace std;

void display();
double monthly(double, double);
void meter_permonth(double&, double&, double&);

int main()
{
	double monthly_cost = 0, permeter = 1.06, total_bill = 651.89, totalmeter_used = 614.99, month = 3, meterUsed_permonth = 0;
	display();
	monthly_cost = monthly(total_bill, month);
	cout << "1 month cost: RM" << monthly_cost << endl << endl;
	meter_permonth(totalmeter_used, month, meterUsed_permonth);
	cout << "Meter used per month: " << meterUsed_permonth << endl << endl;
	
	 
}
void display()
{
	cout << endl << "Total Bill For 3 Months: RM651.89" << endl << endl;
	cout << "Electric rate per meter: RM1.06" << endl << endl;
}
double monthly(double total_bill, double month)
{
	double sum = 0;
	sum = total_bill / month;
	return sum;
}
void meter_permonth(double& totalmeter_used, double& month, double& meterUsed_permonth)
{
	meterUsed_permonth = totalmeter_used / month;
}
