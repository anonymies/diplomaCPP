#include <iostream>
using namespace std;

int num1, choice, even1, even2, even3, even4, even5, odd1, odd2, odd3, odd4, odd5, oddnum, 
evennum, lseries, useries, mtimes, a, answer;

int main()
{
    cout << "Choose 1 for Odd/Even Number Counter or 2 for Advanced Multiplication Series\n";
    cin >> choice;
    if (choice==1)
    {
        cout << "Please insert value \n";
        cin >> num1;
        if (num1 % 2 == 0)
        {
            even1 = 1;
        }
        else
        {
            odd1 = 1;
        }
        cout << "Please insert value \n";
        cin >> num1;

        if (num1 % 2 == 0)
        {
        even2 = 1;
        }
        else
        {
        odd2 = 1;
        }
        cout << "Please insert value \n";
        cin >> num1;

        if (num1 % 2 == 0)
        {
            even3 = 1;
        }
        else
        {
            odd3 = 1;
        }
        cout << "Please insert value \n";
        cin >> num1;

        if (num1 % 2 == 0)
        {
            even4 = 1;
        }
        else
        {
            odd4 = 1;
        }
        cout << "Please insert value \n";
        cin >> num1;

        if (num1 % 2 == 0)
        {
            even5 = 1;
        }
        else
        {
            odd5 = 1;
        }
        
        evennum = even1 + even2 + even3 + even4 + even5;
        oddnum = odd1 + odd2 + odd3 + odd4 + odd5;
        cout << "Even number is: "<<evennum<<" \n";
        cout << "Odd number is: "<<oddnum<<" \n";
    }
    else if (choice==2)
    {
        cout << "Insert value for 'Multiplication Of' \n";
        cin >> mtimes;
        cout << "Insert value for 'Lower Series' \n";
        cin >> lseries;
        cout << "Insert value for 'Upper Series' \n";
        cin >> useries;
        a= useries - lseries;
        for (a=lseries; a<=useries; a++)
        {
            answer = a * mtimes;
            cout << ""<<a<<" * "<<mtimes<<" = "<<answer<<" \n";
        }
    }
    else
    {
        exit;
    }
}
