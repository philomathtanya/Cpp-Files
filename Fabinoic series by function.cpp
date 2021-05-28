#include<iostream>
using namespace std;
int fab(int n)
{
	int a=0,b=1,c=0;
		for(int i=1;i<=n-1;i++)
	{
		cout<<c;
		a=b;
		b=c;
		c=a+b;
	}
return c;
}


int main()
{
	int n,a,b,c;
	cin>>n;
	a=0,b=1,c=a+b;
	cout<<fab(n);
	return 0;
}
