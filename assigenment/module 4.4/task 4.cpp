#include<iostream>
using namespace std;
//class A creat
class A{
	public:
		string name;
		show()
		{
			cout<<"\nenter name : ";
			cin>>name;
		}
};
//class B creat 
class B{
	public:
		int m,e,s,t,avg;
		marks()
		{
			cout<<"\nenter marks of maths : ";
			cin>>m;
			cout<<"\nenter marks of english : ";
			cin>>e;
			cout<<"\nenter marks of science : ";
			cin>>s;
		}
};
// multiple inheritance 
class C:public A,public B{
	public:
		oper()
		{
			t=m+e+s;
			cout<<"\nyour total : "<<t;
			avg=t/3;
			cout<<"\nyour avg mark : "<<avg;
		}
};
int main(){
	//object creat 
	C obj;
	obj.show();
	obj.marks();
	obj.oper();
}
