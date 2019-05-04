//Create a program that will “count” numbers, separated by commas, up to 10. When it
//reaches 10, count by 2s until you reach 30. See the sample output below:
//Counting…
//1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24,26,28,30

//The Fibonacci sequence is a sequence which starts with 0 and 1, with subsequent numbers
//of the sequence (called Fibonacci numbers) being the sum of the previous two. Thus, the first few terms of
//the sequence are: 0,1,1,2,3,5,8,…
//Create a program that will output the NEXT 20 Fibonacci numbers (after 0 and 1) in one line, separated by
//commas. See the sample output below:
//Fibonacci numbers:
//0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946

#include <bits/stdc++.h> 
using namespace std;  
  
void printFibonacciNumbers(int n)  

{  
    int f1 = 0, f2 = 1, i;  
    
    if (n < 1)  
    return;  
  
    for (i = 1; i <= n; i++)  
    { cout<<f1<<",";  
        int next = f1 + f2;  
        f1 = f2;  
        f2 = next; }  
}  
  
int main()  
{  
    printFibonacciNumbers(21); 
	cout << "10946" << endl;
    return 0;  
}  

