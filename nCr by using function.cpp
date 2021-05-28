//nCr
#include<iostream>
using namespace std;
	int n,r,a=1,b=1,c=1,num=0;
int nCr(int n,int r)
{
	for(int i=1;i<=n;i++)
	{
		a=a*i;
	}
	for(int i=1;i<=n-r;i++)
	{
		b=b*i;
	}
	for(int i=1;i<=r;i++)
	{
		c=c*i;
	}
	num=a/(b*c);
	//cout<<num;
return num;
}


int main()
{

	cout<<"Enter the value of n:";
	cin>>n;
	cout<<"Enter the value of r:";
	cin>>r;
	
	cout<<"nCr is="<<nCr(n,r);
	return 0;
}
