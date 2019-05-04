//PROBLEM 2: Write a program that computes a customer's water bill. The bill includes a P35 water demand 
//charge plus a consumption (use) charge of P1.10 for every gallon used. Consumption is figured from meter 
//readings in gallons taken recently and during the previous month. If the customer S unpaid balance is 
//greater than O, a P20 late charge is assessed as well 


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float consumption,unpaid,total;

	cout << "ENTER THIS MONTH'S WATER CONSUMPTION IN GALLONS" << endl;
	cin >> consumption;

	cout << "ENTER UNPAID BALANCE" << endl;
	cin >> unpaid;

{ if (unpaid > 0) 
{ total = 35 + (consumption * 1.10) + unpaid + 20; } 

else 
{ total = 35 + (consumption * 1.10); } }

	cout << "Total is :" << total << endl;

	_getch();
	return 0;
}


