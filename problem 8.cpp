//: Create a program that will generate the multiplication table (up to x10) of a number. See the
//sample output below:
//Enter a number: 6
//Multiplication table of 6:
//1 * 6 = 6
//2 * 6 = 12
//3 * 6 = 18
//4 * 6 = 24
//5 * 6 = 30
////6 * 6 = 36
//7 * 6 = 42
//8 * 6 = 48
//9 * 6 = 54
//10 * 6 = 60


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float n,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;

	cout << "Enter a number:" << endl;
	cin >> n;

t1 = 1 * n;
t2 = 2 * n;
t3 = 3 * n;
t4 = 4 * n;
t5 = 5 * n;
t6 = 6 * n;
t7 = 7 * n;
t8 = 8 * n;
t9 = 9 * n;
t10 = 10 * n;

	cout << "1 * " <<n<< " = " <<t1<< endl;
	cout << "2 * " <<n<< " = " <<t2<< endl;
	cout << "3 * " <<n<< " = " <<t3<< endl;
	cout << "4 * " <<n<< " = " <<t4<< endl;
	cout << "5 * " <<n<< " = " <<t5<< endl;
	cout << "6 * " <<n<< " = " <<t6<< endl;
	cout << "7 * " <<n<< " = " <<t7<< endl;
	cout << "8 * " <<n<< " = " <<t8<< endl;
	cout << "9 * " <<n<< " = " <<t9<< endl;
	cout << "10 * " <<n<< " = " <<t10<< endl;
	
	_getch();
	return 0;
}

