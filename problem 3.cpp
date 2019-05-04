//The value of V depends on the values of x and y as follows:
//V= xyz when x = 1 and 1<y<5
//V= x + y/z when x= 1 and y>=5
//V= |(x – y)/z| when x = 2 and y<=5
//V= x-v?? + ?? when x = 2 and y>5
//V = x +y + z for other values of x and y

//Write a C++ program that accepts two integers x and y from the kbd. Let z =2.5. Use a constant declaration
//for z and output V with 10 field width and two decimal places. Use switch statement for selection of x
//values



#include <iostream>
#include <iomanip> 
#include <cmath>  
#include <conio.h>

using namespace std;
int main()

{
	int x,y;
	float V;
	// z = 2.5;

	cout << "\n Enter value for x: \n";
		cin >> x; 
	cout << "\n Enter value for y: \n";
		cin >> y; 
	
	switch (x) 
	{
		case 1: 
		if (1 < y < 5)
			{ V = x * y * 2.5; }
		else if (y >= 5)
			{ V = x + (y / 2.5); }
		break;
			
		case 2: 
		if (y <= 5)
			{ V = abs((x - y) / 2.5); }
		else if (y > 5)
		    { V = x - (sqrt(y + 2.5)); }
		break;
			
		default:
			V = x + y + 2.5; 
		break;
	}
	
	cout << "\n The value for V is: \n" << setw(10) << setprecision(2) << V; 
	
	_getch();
	return 0;
}
