#include<iostream>
using namespace std;
//class creat 
// base class 
class Students{
	public:
		show()
		{
		int rollno;
		string name;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Roll.no : ";
		cin>>rollno;
	}
};
// multilevel inheritance
class Test :public Students{
	public: 
	int m,s;
	marks()
		{
			cout<<"\nenter marks of maths : ";
			cin>>m;
		    cout<<"\nenter marks of science : ";
			cin>>s;
		}
	
};
// derived class
class Result:public Test{
	public:
		int t;
	oper()
	{
		    t=m+s;
			cout<<"\nyour total : "<<t;
	}
};
int main()
{
	//object creat
	Result obj;
	obj.show();
	obj.marks();
	obj.oper();
	
}

