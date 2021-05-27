#include<iostream>
using namespace std;

int fact(int a)
{int count=1;
	for(int i=1;i<=a;i++)
	count=count*i;
	return count;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"The factorial ="<<fact(a)<<endl;
	cout<<"The factorial ="<<fact(b);

return 0;
}
