#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
int s=0;
	for(int i=0;i<n;i++)
	{
		s=s^arr[i];
	}	
	return s;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int c=unique(arr,n);
	cout<<"the unique element is:"<<c;
	
}
