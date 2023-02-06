#include <iostream>
using namespace std;

void final_price(double&, double&, double&);

int main()
{
	double original_price, discount, discount_price, a, b, c, d;
	
	cout << "\n\tDUOPLAYER\tORIGINAL PRICE\t\tDISCOUNT%" << endl;
	cout << "\tA\t\tRM130\t\t\t40%" << endl;
	cout << "\tB\t\tRM280\t\t\t60%" << endl;
	cout << "\tC\t\tRM440\t\t\t45%" << endl;
	cout << "\tD\t\tRM230\t\t\t10%" << endl;
	//DUOPLAYER A
	original_price = 130;
	discount = 0.6;
	final_price(original_price, discount, discount_price);
	a = discount_price;
	cout << "\n\tA. Price after discount: " << a << endl;
	//DUOPLAYER B
	original_price = 280;
	discount = 0.4;
	final_price(original_price, discount, discount_price);
	b = discount_price;
	cout << "\n\tB. Price after discount: " << b << endl;
	//DUOPLAYER C
	original_price = 440;
	discount = 0.55;
	final_price(original_price, discount, discount_price);
	c = discount_price;
	cout << "\n\tC. Price after discount: " << c << endl;
	//DUOPLAYER D
	original_price = 230;
	discount = 0.9;
	final_price(original_price, discount, discount_price);
	d = discount_price;
	cout << "\n\tD. Price after discount: " << d << endl;
	//IF CONDITION
	if(a<b && a<c && a<d)
	{
		cout << endl << "The cheapest price after discount is DUOPLAYER A: RM" << a << endl << endl;
	}
	else if(b<a && b<c && b<d)
	{
		cout << endl << "The cheapest price after discount is DUOPLAYER B: RM" << b << endl << endl;
	}
	else if(c<a && c<b && c<d)
	{
		cout << endl << "The cheapest price after discount is DUOPLAYER C: RM" << c << endl << endl;
	}
	else if(d<a && d<b && d<c)
	{
		cout << endl << "The cheapest price after discount is DUOPLAYER D: RM" << d << endl << endl;
	}
	else
	{
		cout << endl << "Invalid Data!" << endl << endl;
	}
}
void final_price(double &original_price, double &discount, double &discount_price)
{
	discount_price = 0;
	discount_price = original_price*discount;
}
