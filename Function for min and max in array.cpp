#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int minmax(int arr[],int n)
{
	int max=arr[0],min;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		min=arr[0];
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"The maximum num is:"<<max<<endl;
	cout<<"The minimum num is:"<<min;
	
}
  int main()
    {
       	int n;
       	cout<"Enter the number";
       	cin>>n;
       	int arr[n];
       	for(int i=0;i<n;i++)
       	cin>>arr[i];
       	minmax(arr,n);
	return 0;
	}
