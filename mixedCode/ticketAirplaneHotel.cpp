#include <iostream>
using namespace std;

int main()
{
	int destination, guest, age, room_num;
	char menu, room;
	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		double china = 0, indo = 0, thai = 0, room_price = 0, room_total = 0, total_price = 0, sum = 0;
		
		cout << "\nFLY AIRPLANE SYSTEM\n\n";
		cout << "A - Flight\n";
		cout << "B - Flight & Hotel\n\n";
		cout << "Reservation type: ";
		cin >> menu;
		if (menu == 'A' || menu == 'a')
		{
			cout << "\nDestination Package:\n";
			cout << "1 - China : Guangzhou, Shanghai, Shenzen (RM2000)\n";
			cout << "2 - Indonesia : Bali, Jakarta, Bandung (RM1600)\n";
			cout << "3 - Thailand : Bangkok, Chiang Mai, Narathiwat (RM1200)\n\n";
			cout << "Where are you going? ";
			cin >> destination;
			if (destination == 1)
			{
				cout << "\nDestination: China - Guangzhou, Shanghai, Shenzen" << endl;
				cout << "Number of guest(s): ";
				cin >> guest;
				int y = 1;
				for (int x = 0; x < guest; x++)
				{
					cout << "\t" << y << "\tGuest age: ";
					cin >> age;
					if (age > 0 && age <= 12)
					{
						china = 2000*0.8;
					}
					else if (age > 12)
					{
						china = 2000;
					}
					else
					{
						cout << "Wrong input!" << endl;
					}
					sum = sum + china;
					y++;
				}
				cout << "\nPrice details:\n";
				cout << "Ticket price: RM" << sum << endl;
			}
			else if (destination == 2)
			{
				cout << "\nDestination: Indonesia - Bali, Jakarta, Bandung" << endl;
				cout << "Number of guest(s): ";
				cin >> guest;
				int y = 1;
				for (int x = 0; x < guest; x++)
				{
					cout << "\t" << y << "\tGuest age: ";
					cin >> age;
					if (age > 0 && age <= 12)
					{
						indo = 1600*0.8;
					}
					else if (age > 12)
					{
						indo = 1600;
					}
					else
					{
						cout << "Wrong input!" << endl;
					}
					sum = sum + indo;
					y++;
				}
				cout << "\nPrice details:\n";
				cout << "Ticket price: RM" << sum << endl;
			}
				else if (destination == 3)
			{
				cout << "\nDestination: Thailand - Bangkok, Chiang Mai, Narathiwat" << endl;
				cout << "Number of guest(s): ";
				cin >> guest;
				int y = 1;
				for (int x = 0; x < guest; x++)
				{
					cout << "\t" << y << "\tGuest age: ";
					cin >> age;
					if (age > 0 && age <= 12)
					{
						thai = 1200*0.8;
					}
					else if (age > 12)
					{
						thai = 1200;
					}
					else
					{
						cout << "Wrong input!" << endl;
					}
					sum = sum + thai;
					y++;
				}
				cout << "\nPrice details:\n";
				cout << "Ticket price: RM" << sum << endl;
			}
			else
			{
				cout << "Wrong input!";
			}
			cout << "Do you want to continue with reservation? (Y/N): ";
			cin >> choice;
		}
		else if (menu == 'B' || menu == 'b')
		{
			cout << "\nDestination Package:\n";
			cout << "1 - China : Guangzhou, Shanghai, Shenzen (RM2000)\n";
			cout << "2 - Indonesia : Bali, Jakarta, Bandung (RM1600)\n";
			cout << "3 - Thailand : Bangkok, Chiang Mai, Narathiwat (RM1200)\n\n";
			cout << "Where are you going? ";
			cin >> destination;
			if (destination == 1)
			{
				cout << "\nDestination: China - Guangzhou, Shanghai, Shenzen" << endl;
				cout << "Number of guest(s): ";
				cin >> guest;
				int y = 1;
				for (int x = 0; x < guest; x++)
				{
					cout << "\t" << y << "\tGuest age: ";
					cin >> age;
					if (age > 0 && age <= 12)
					{
						china = 2000*0.8;
					}
					else if (age > 12)
					{
						china = 2000;
					}
					else
					{
						cout << "Wrong input!" << endl;
					}
					sum = sum + china;
					y++;
				}
				//cout << "Price details:\n";
				//cout << "Ticket price: RM" << sum << endl;
			}
			else if (destination == 2)
			{
				cout << "\nDestination: Indonesia - Bali, Jakarta, Bandung" << endl;
				cout << "Number of guest(s): ";
				cin >> guest;
				int y = 1;
				for (int x = 0; x < guest; x++)
				{
					cout << "\t" << y << "\tGuest age: ";
					cin >> age;
					if (age > 0 && age <= 12)
					{
						indo = 1600*0.8;
					}
					else if (age > 12)
					{
						indo = 1600;
					}
					else
					{
						cout << "Wrong input!" << endl;
					}
					sum = sum + indo;
					y++;
				}
				//cout << "Price details:\n";
				//cout << "Ticket price: RM" << sum << endl;
			}
				else if (destination == 3)
			{
				cout << "\nDestination: Thailand - Bangkok, Chiang Mai, Narathiwat" << endl;
				cout << "Number of guest(s): ";
				cin >> guest;
				int y = 1;
				for (int x = 0; x < guest; x++)
				{
					cout << "\t" << y << "\tGuest age: ";
					cin >> age;
					if (age > 0 && age <= 12)
					{
						thai = 1200*0.8;
					}
					else if (age > 12)
					{
						thai = 1200;
					}
					else
					{
						cout << "Wrong input!" << endl;
					}
					sum = sum + thai;
					y++;
				}
				//cout << "Price details:\n";
				//cout << "Ticket price: RM" << sum << endl;
			}
			else
			{
				cout << "Wrong input!";
			}
			cout << "\nRoom Details" << endl;
			cout << "E - Executive Suite (RM650)" << endl;
			cout << "S - Suite (RM500)" << endl;
			cout << "D - Deluxe (RM450)" << endl << endl;
			cout << "Choose room type: ";
			cin >> room;
			if (room == 'E' || room == 'e')
			{
				room_price = 650;
			}
			else if (room == 'S' || room == 's')
			{
				room_price = 500;
			}
			else if (room == 'D' || room == 'd')
			{
				room_price = 450;
			}
			else
			{
				cout << "Wrong input!" << endl;
			}
			cout << "Number of room(s): ";
			cin >> room_num;
			room_total = room_price * room_num;
			total_price = sum + room_total;
			cout << "\nPrice details:" << endl;
			cout << "Ticket price: RM" << sum << endl;
			cout << "Room price: RM" << room_total << endl;
			cout << "Total price: RM" << total_price << endl;
			cout << "Do you want to continue with reservation? (Y/N): ";
			cin >> choice;
		}
		else
		{
			cout << "Wrong menu input!" << endl << endl;
			choice = 'y';
		}
	}
	if (choice == 'N' || choice == 'n')
	{
		return 0;
	}
	
}
