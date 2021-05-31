#include<iostream>
#include<cmath>
using namespace std;
int od(int n)
{
		int p=0,r,b=0;
	while(n!=0)
	{
	r=n%10;
	b=b+r*pow(8,p);
	n=n/10;
	++p;
	}
	cout<<b;
}

int main()
{
	int n,b,p,r;
	cin>>n;
	od(n);
	return 0;
}
