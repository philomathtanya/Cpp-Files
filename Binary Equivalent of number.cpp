#include<iostream>
using namespace std; 
int main ()
{
    int num, a,b=0,p=1;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary of " << num << " is ";
    while (num > 0)
    {
        a = num % 2;
        b=b+a*p;
        num /= 2;
    	p=p*10;
	}
    cout << b;
    return 0;
}
