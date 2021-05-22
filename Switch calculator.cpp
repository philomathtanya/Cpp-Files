#include<iostream>
using namespace std;
int main()
{
	int a,b,s;
	char ch;
	cout<<"Enter the eqution";
	cin>>a>>ch>>b;
	switch(ch)
	{
		case '+':
			s=a+b;
			break;
		case '-':
			s=a-b;
			break;
		case '*':
			s=a*b;
			break;
		case '/':
			s=a/b;
			break;
		case '%':
			s=a%b;
			break;
	}
	cout<<"Answer="<<s;
	return 0;
}
