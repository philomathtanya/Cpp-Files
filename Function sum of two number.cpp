#include<iostream>
using namespace std;
int sum;
int add(int a,int b)
{
	sum=a+b;
	return sum;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<add(a,b);
}
