#include<iostream>
using namespace std;
int count=1;
int fact(int a)
{
	for(int i=1;i<=a;i++)
	count=count*i;
	return count;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fact(a)<<endl;
	cout<<fact(b);

return 0;
}
