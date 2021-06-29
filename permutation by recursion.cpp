#include <bits/stdc++.h>
using namespace std;



void sol(string str,int n,int r)  //BCA, n=0,r=2  
{
//	int n=0;
if(n==r)
{
	cout<<str<<"\n";
}

	for (int i=n;i<=r;i++)//0,1,2
	{
		swap(str[n],str[i]);
		sol(str,n+1,r); 
		swap(str[n],str[i]);
		
	}
}
int main()
{
	string str;
		cin>>str;
		int l=str.size();
sol(str,0,l-1);   //ABC,0,2


}
