#include<iostream>
using namespace std;
//class creat
class Person{
	public:
		int age;
		string name;
		show(){
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"\nEnter Age :  ";
		cin>>age;
	}
};
//class creat
class Student{
	public:
		int m,s,e,t,per,avg;
		marks()
		{
			cout<<"\nenter marks of maths : ";
			cin>>m;
			cout<<"\nenter marks of english : ";
			cin>>e;
			cout<<"\nenter marks of science : ";
			cin>>s;
			t=m+e+s;
			cout<<"\nyour total : "<<t;
			avg=t/3;
			cout<<"\nyour avg mark : "<<avg;
		}
};
//multiple inheritance
class Teacher:public Person,public Student {
	
	public:
		int salary;
		myfun()
		{
			cout<<"\nEnter your salary : ";
			cin>>salary;
			
		}
	
	
};
int main()
{
	//object creat
	Teacher obj;
	obj.show();
	obj.marks();
	obj.myfun();
}
