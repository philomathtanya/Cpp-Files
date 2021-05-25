#include<iostream>
using namespace std;
int main()
{
int n, r=0, rem;    
cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;      
     r=r*10+rem;    
     n/=10;    
  }    
 cout<<"The Reversed Number: "<<r<<endl;     
return 0;  
}
