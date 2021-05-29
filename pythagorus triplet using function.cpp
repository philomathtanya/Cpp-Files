#include<iostream>
using namespace std;
int pyth(int h,int b,int p)
{
	if(h*h==b*b+p*p)
	{
		cout<<"The tringle is pythagoras triplet";
	}
	else
	cout<<"The tringle is not pythagoras triplet"<<endl;
return 0;
}
int main()
{
	int a=0,x=0,c=0,h=0,b=0,p=0;
	cin>>a>>x>>c;
	if(a>x)
	{
		if(a>c)
		{
			h=a;
			b=x;
			p=c;
		}
	}	
	else if(x>c)
		{
			h=x;
			b=a;
			p=c;
		}
		else
			{
				h=c;
				b=x;
				p=a;
			}
pyth(h,b,p);
return 0;
}
