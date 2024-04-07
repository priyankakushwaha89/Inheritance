//Hybrid inheritence

#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
	public:
		void getdata()
		{
			cout<<"enter the value of a"<<endl;
			cin>>a;
		}
		
};
class B:public A
{
	protected:
		int b;
	public:
		void getdata1()
		{
			cout<<"enter the value of b"<<endl;
			cin>>b;
		}
};
class c
{
	protected:
		int c;
	public:
		void getdata2()
		{
			cout<<"enter the value of c"<<endl;
			cin>>c;
		}
};
class D:public B,public C
{
	public:
		void display()
		{
			int d=a+b+c;
			cout<<"sum of numbers="<<d<<endl;
		}
};
int main()
{
	D x;
	x.getdata();
	
	x.getdata1();
	
	x.getdata2();
	
	x.display();
	return 0;
	
}
