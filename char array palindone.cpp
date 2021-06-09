#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cout<<"ENter the number:";
	cin>>n;
	char arr[n];
	
	cin>>arr;
	int c;
	int l=strlen(arr);
	
	for(int i=0;i<=l;i++)
	{
		if(arr[i]==arr[(n-1)-i])
		{
			c=0;
		}
		else
		c=c+1;
	
	}
	if (c==0)
	cout<<"The string is palindrone";
	else
	cout<<"The string is not palindrone";
	
	
	
	return 0;
}
