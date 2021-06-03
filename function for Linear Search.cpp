#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int linSer(int arr[],int n,int a)
{	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			cout<<"The key find at index:"<<i; 
		}
	}
}
	
   int main()
    {  	
    int a,n;
    cout<<"Enter the length:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<"Enter the key:";
    cin>>a;
    linSer(arr,n,a);
	return 0;
	}
