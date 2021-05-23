#include<iostream>
using namespace std;
int main()
{ int x,y;
cin>>x;
cin>>y;
	for(int a=x;a<=y;a++)
	{
	
	int c=0;
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
			c=c+1;
		else
			continue;
	}
	if(c==1)
	cout<<a<<endl;
	}




}

