#include<iostream>
#include<math.h>
using namespace std;
int sum(int n,int p)
{
	if(n==1)
	{
		return 1;
	}
	return pow(n,p);
}
int main()
{
	int n,p;
	cout<<"Enter the number";
	cin>>n;
	cout<<"Enter the power";
	cin>>p;	

cout<<sum(n,p);
return 0;
}
