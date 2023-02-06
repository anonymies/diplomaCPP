#include <iostream>
using namespace std;

int quantity;
string menu;
double B1, B2, B3, B4, B5, total;

int main()
{
    cout << "Welcome to Banting Baker Shop! \n\n";
    char choice = 'Y';
    
    while(choice == 'Y' || choice == 'y')
    {
        cout << "Please insert your choice: \n\n B1 : Hot Cross Bun -- RM25.00 \n 
        B2 : Savory Muffins -- RM30.00 \n B3 : Chocolate Brownies -- RM45.00 \n 
        B4 : Passion Fruit Cheesecake -- RM54.00 \n B5 : Hazelnut Vanilla Cheesecake -- RM58.00 \n";
        cout << "Your choice is: ";
        cin >> menu;
        
        if(menu == "B1")
        {
            cout << "Please enter the quantity: ";
            cin >> quantity;
            B1 = (25 * quantity)+(25 * quantity * 0.03);
        }
        else if(menu == "B2")
        {
            cout << "Please enter the quantity: ";
            cin >> quantity;
            B2 = (30 * quantity)+(30 * quantity * 0.03);
        }
        else if(menu == "B3")
        {
            cout << "Please enter the quantity: ";
            cin >> quantity;
            B3 = (45 * quantity)+(45 * quantity * 0.03);
        }
        else if(menu == "B4")
        {
            cout << "Please enter the quantity: ";
            cin >> quantity;
            B4 = (54 * quantity)+(54 * quantity * 0.03);
        }
        else if(menu == "B5")
        {
            cout << "Please enter the quantity: ";
            cin >> quantity;
            B5 = (58 * quantity)+(58 * quantity * 0.03);
        }
        else
        {
        }
        
        cout << "\nNext choice? Enter 'Y' for Yes, and 'N' for No \n";
        cin >> choice;
    }
    
    
    if(choice == 'N' || choice == 'n')
    {
        total = B1 + B2 + B3 + B4 + B5;
    }
    else
    {
    }
    
    cout << "Total payment: RM"<<total<<" \n";
    cout << "Thank You, Please come again. \n";
}
