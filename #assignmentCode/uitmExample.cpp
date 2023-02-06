#include<iostream>
using namespace std;

int main()
{
	string name, citizen_tag;
	double cost_adults = 0, cost_kids = 0, totalcost = 0, adults_price = 0, kids_price = 0;
	int adults,kids,citizen;
	
	cout<<"#KUCHING DIGITAL COMMUNITY RUN 2018#"<<endl;
	
	cout<<"Enter your name :"<<endl;//should be full name or nickname
	cin>>name;
	
	cout<<"Enter your citizen :\n1.Malaysian\n2.Foreigner"<<endl;//should be malaysian or foreigner
	cin>>citizen;
	
	cout<<"No. of Adult :"<<endl;
	cin>>adults;
	
	if(adults >= 0 && citizen == 1)
	{
		cout<<"No. of Kids : "<<endl;
		cin>>kids;
		citizen_tag = "Malaysian";
		adults_price = 60;
		kids_price = 20;
		cost_adults = adults_price * adults;
		cost_kids = kids_price * kids;
		totalcost = cost_adults + cost_kids;
		cout << "NAME: " << name << endl << "CITIZEN: " << citizen_tag << endl;	
		cout << "NO. OF ADULTS: " << adults << endl << "NO. OF KIDS: " << kids << endl;
		cout << "PAYMENT: " << endl;
		cout << "Adult: " << cost_adults << endl << "Kids: " << cost_kids << endl;
		cout << "TOTAL PAYMENT: RM" << totalcost << endl << "THANK YOU VERY MUCH" << endl << endl;	
	}
 	else if(adults >= 0 && citizen == 2 )
	{
		cout<<"No. of Kids : "<<endl;
		cin>>kids;
		citizen_tag = "Foreigner";
		adults_price = 40 * 4;
		kids_price = 20 * 4;
		cost_adults = adults_price * adults;
		cost_kids = kids_price * kids;
		totalcost = cost_adults + cost_kids;
		cout << "NAME: " << name << endl << "CITIZEN: " << citizen_tag << endl;	
		cout << "NO. OF ADULTS: " << adults << endl << "NO. OF KIDS: " << kids << endl;
		cout << "PAYMENT: " << endl;
		cout << "Adult: " << cost_adults << endl << "Kids: " << cost_kids << endl;
		cout << "TOTAL PAYMENT: RM" << totalcost << endl << "THANK YOU VERY MUCH" << endl << endl;
	}
	else
	{
		cout<<"Please enter ther correct data"<<endl;
	}
	return 0;
}
