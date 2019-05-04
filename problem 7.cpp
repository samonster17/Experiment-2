//Create a program that will generate the sum of all whole numbers starting from 1 up to a
//given number. For example, given an input of 5, the summation is 1+2+3+4+5 = 15. Continue asking for
//input and calculating until the user enters 0 or a negative number. See the sample outputs below:
//Enter a number: 6
//The sum of all whole numbers from 1 to 6 is 21.
//Enter a number: 8
//The sum of all whole numbers from 1 to 8 is 36.
//Enter a number: 5
//The sum of all whole numbers from 1 to 5 is 15.
//Enter a number: 12
//The sum of all whole numbers from 1 to 12 is 78.
//Enter a number: 15
//The sum of all whole numbers from 1 to 15 is 120.
//Enter a number: 0
//Thank you!


#include <iostream>
using namespace std;

int main()
{
    int n, sum ;
    
do
{
    cout << "\n Enter a positive integer: \n";
    cin >> n;
    sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of all whole numbers from 1 to " <<n<< " is " <<sum<< ".";
    
} while (n>0);

cout << "Thank you!" << endl;
return 0;
}
