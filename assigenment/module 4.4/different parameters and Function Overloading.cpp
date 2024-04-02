#include<iostream>
using namespace std;
class A{
	public:
		add(int a,int b)
		{
			cout<<"\nAddition : "<<a+b;
        }
        sub(int c,int d)
        {
           cout<<"\nSubstraction : "<<c-d;	
		}
		mul(int e,int f)
		{
			cout<<"\nMultiplication : "<<e*f;
		}
		div(float a,float b)
		{
			cout<<"\nDivision : "<<a/b;
		}
};
int main()
{
	A obj;
	obj.add(10,20);
	obj.sub(40,30);
	obj.mul(4,6);
	obj.div(8,7);
}
