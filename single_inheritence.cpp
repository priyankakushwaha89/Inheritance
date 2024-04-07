//single inheritence

#include<iostream>
using namespace std;

class A
{
	public:
		int a,b;
		void getdata()
		{
		 cout<<"enter the value of a and b"<<endl;
		 cin>>a>>b;	 	
		}
		void sum()
		{
			int c;
			c=a+b;
			cout<<"sum of two number="<<c<<endl;
		}
};
class B :public A
{
	public:
	
		void mul()
		{
			int d=a*b;
			cout<<"multiple of two numbers="<<d<<endl;
		}
};
int main()
{
  B x;
  x.getdata();	
  x.sum();
  x.mul();
  
  return 0;
}
