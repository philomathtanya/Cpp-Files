#include<iostream>
using namespace std; 
int db(int num)
{
	 int a,b=0,p=1;
	cout << "The binary of " << num << " is ";
    while (num > 0)
    {
        a = num % 2;
        b=b+a*p;
        num /= 2;
    	p=p*10;
	}
    cout << b;
}
int main ()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    db(num);
    return 0;
}
