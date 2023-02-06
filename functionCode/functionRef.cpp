#include <iostream>
using namespace std;

void boys_left(int&, int&);

int boys_num;

int main()
{
	int student_total = 0, girls_num = 0;
	
	boys_num = 0;
	cout << "\tSPORT_HOUSES\tSTUDENT_TOTAL\tNUMBER_OF_GIRLS\t\tNUMBER_OF_BOYS\n";
	student_total = 100;
	girls_num = 50;
	boys_left(student_total, girls_num);
	cout << "\tRED\t\t" << student_total << "\t\t" << girls_num << "\t\t\t" << boys_num << endl;
	student_total = 250;
	girls_num = 95;
	boys_left(student_total, girls_num);
	cout << "\tGREEN\t\t" << student_total << "\t\t" << girls_num << "\t\t\t" << boys_num << endl;
	student_total = 85;
	girls_num = 15;
	boys_left(student_total, girls_num);
	cout << "\tBLUE\t\t" << student_total << "\t\t" << girls_num << "\t\t\t" << boys_num << endl;
	student_total = 70;
	girls_num = 30;
	boys_left(student_total, girls_num);
	cout << "\tYELLOW\t\t" << student_total << "\t\t" << girls_num << "\t\t\t" << boys_num << endl;
	student_total = 100;
	girls_num = 64;
	boys_left(student_total, girls_num);
	cout << "\tPURPLE\t\t" << student_total << "\t\t" << girls_num << "\t\t\t" << boys_num << endl << endl;
}

void boys_left(int &student_total, int &girls_num)
{
	boys_num = student_total - girls_num;
}
