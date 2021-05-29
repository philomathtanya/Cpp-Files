#include<iostream>
using namespace std;
int nterm(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+n;
		n=n-1;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Enter the n number:";
	cin>>n;
	cout<<nterm(n);
}
