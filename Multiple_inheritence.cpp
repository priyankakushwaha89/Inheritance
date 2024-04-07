//Multiple inheritence

#include<iostream>
using namespace std;
class marks
{
	public:
		int m1,m2;
		void getmarks()
		{
			cout<<"enter the marks obtained by student"<<endl;
			cin>>m1>>m2;
		}
		void show()
		{
			cout<<"marks in subject 1="<<m1<<endl;
			cout<<"marks in subject 2="<<m2<<endl;
		}
};
class score
{
	public:
		int s1,s2;
		void getscore()
		{
			cout<<"enter the obtained scores"<<endl;
			cin>>s1>>s2;
		}
		void show1()
		{
			cout<<"score 1="<<s1<<endl;
			cout<<"score 2="<<s2<<endl;
		}
};
class result:public marks,public score
{
	public:
		void display()
		{
			int total=m1+m2+s1+s2;
			cout<<"total marks obtained="<<total<<endl;
		}
};
int main()
{
	result x;
	x.getmarks();
	x.show();
	
	x.getscore();
	x.show1();
	
	x.display();
	
	return 0;
}
