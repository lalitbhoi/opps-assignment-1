#include<iostream>
using namespace std;
// class creat
class Circle{
	// private access modifier 
	private:
	 float radius, area, PI=3.14,C;
	 // public access modifier 
	 public:
	 	round()
		{
		 cout<<"Enter radius of circle:";
	 	cin>>radius;
	 	area=PI *radius * radius;
	 	cout<< "Area of circle:"<<area;
	 	C=2*PI*radius;
	    cout<< "\ncircumference of circle:"<<C;
	 }
};
int main()
{
	//object creat
	Circle obj;
	obj.round();
}
