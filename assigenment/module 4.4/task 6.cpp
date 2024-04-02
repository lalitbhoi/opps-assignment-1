#include<iostream>
using namespace std;
// class creat 
class A{
	// all access modifier
	public:
		int a=10;
		private:
			int b=20;
			protected:
				int c=30;
				
				friend class B; // friend class 
};
class B:public A{
		public:
		show(A& b)
		{
			cout<<"A :"<<a;
			cout<<"\nB : "<<b.b;
			cout<<"\nC :"<<c;
		}
};
int main()
{
	// object creat
	B obj;
	
	obj.show(obj);
}

