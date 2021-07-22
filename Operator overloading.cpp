#include<iostream>
using namespace std;
class over
{
	private:
		int real;
		int imag;
	public:
		over(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		void print()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
			
		}
};
int main()
{
	
	over c1(1,2);
over c2(9,5);
over c3;
c3=c1+c2;
return 0;
}
