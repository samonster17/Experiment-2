//Create a program that will accept three numbers as input and display the LARGEST number
//of the three.
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    double n1, n2, n3;

    cout << "Enter THREE different numbers" << endl;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
       cout << "The LARGEST of the THREE numbers is: " <<n1<< endl;

    if( n2>=n1 && n2>=n3 )
       cout << "The LARGEST of the THREE numbers is: " <<n2<< endl;

    if( n3>=n1 && n3>=n2 )
       cout << "The LARGEST of the THREE numbers is: " <<n3<< endl;

    return 0;
}
