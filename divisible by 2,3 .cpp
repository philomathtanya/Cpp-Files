#include<iostream>
using namespace std;
int main()
{
	int a;
	char ch;
	cout<<"Enter the number:";
	cin>>a;
	if(a%2==0 && a%3==0)
	{
		cout<<"Divisible by both";
	}
	else
		if(a%2==0 || a%3==0)
		cout<<"divisible by one of then";
		
	return 0;
}
