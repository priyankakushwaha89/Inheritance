//multilevel inheritence

#include<iostream>
using namespace std;

class student
{
	protected:
		int rno;
    public:
    	void getrno()
    	{
    		cout<<"enter the roll number"<<endl;
    		cin>>rno;
		}
		void show()
		{
			cout<<"roll number="<<rno<<endl;
		}
};
class marks:public student
{
	protected:
		int m1,m2;
	public:
			void getmarks()
			{
				cout<<"enter the marks of students"<<endl;
				cin>>m1>>m2;
			}
			void show2()
			{
				cout<<"marks of subject 1="<<m1<<endl;
				cout<<"marks of subject 2="<<m2<<endl;
			}
};
class result:public marks
{
	public:
		void display()
		{
			int total=m1+m2;
			cout<<"total marks obtained by student="<<total<<endl;
		}
};
int main()
{
	result x;
	x.getrno();
	x.show();
	x.getmarks();
	x.show2();
	x.display();
	return 0;
}
