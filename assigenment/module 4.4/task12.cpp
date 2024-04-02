#include<iostream>
using namespace std;
class A{
	// private access modifier
	private:
		int a,b;
		public: 
		show()
		{
				cout<<"\nenter a: ";
		 	cin>>a;
		 	cout<<"\nenter b: ";
		 	cin>>b;
		 	
		}
		friend show1(A& t); // friend function
};
show1(A& t)
{
	
		      t.a=t.a*t.b;
		     t.b=t.a/t.b;
		     t.a=t.a/t.b;
		 	
	cout<<"\nafter swapping value of a : "<<t.a;
	cout<<"\nafter swapping value of b : "<<t.b;
}
int main()
{
	A obj;
	obj.show();
	show1(obj);
}

