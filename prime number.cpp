#include<iostream>
using namespace std;
int main()
{
	int a,c=0;
	cin>>a;
	for(int i=1;i<a/2;i++)
	{
		if(a%i==0)
			c=c+1;
		else
			continue;
	}
	if(c==1)
	cout<<"Prime";
	else
	cout<<"Not prime";
}


