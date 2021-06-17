#include<iostream>
using namespace std;
int dec(int n)
{
	if(n==0)
	{
		return 0;
	}
	cout<<n<<endl;
	return dec(n-1);
}
int inc(int n)
{
	if(n==0)
	{
		return 0;
	}
	inc(n-1);
	cout<<n<<endl;
	
}
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	inc(n);
	cout<<"In dec="<<endl;
	dec(n);
return 0;
}
