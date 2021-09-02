#include<iostream>
using namespace std;
int main()
{
	cout<<"First line";
	try{
		cout<<"\nhello";
		throw 5;
	}
	catch(int a){
		cout<<"\nException number is:"<<a;
	}
}
