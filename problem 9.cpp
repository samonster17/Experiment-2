//Create a program that will draw a box using “*” characters given its dimensions in rows and
//columns. See the sample outputs below:

//How many rows: 6
//How many columns: 8
//********
//********
//********
//********
//********
//********
//How many rows: 5
//How many columns: 12
//************
//************
//************
//************
//************

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int x,y;

cout << "enter height" << endl;
cin >> y;
cout << "enter width" << endl;
cin >> x;

// outer loop
for ( int a = 1 ; a <= x  ; a++) {
	
	// inner loop
	for ( int  b =1 ; b <= y ; b++) {
		cout << " * ";
		
	}
	cout << "\n" <<endl;
	
	}
return 0;
}


