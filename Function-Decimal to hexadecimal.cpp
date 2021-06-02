#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void dtoh(int n)
{
    char c[100];
 	 int i = 0;
    while (n != 0) {
        int  t= 0;
         t = n % 16;
   	if (t< 10)
	    {
       		c[i] =t+ 48;
        	i++;
        }
    else
		 {
            c[i] =t + 55;
            i++;
        }
 
        n = n / 16;
    }
for(int j=i-1;j>=0;j--)
cout<<c[j];
}
 

	

   int main()
    {
    	int z;
       cin>>z;
	  
	dtoh(z);   	
	return 0;
	}
