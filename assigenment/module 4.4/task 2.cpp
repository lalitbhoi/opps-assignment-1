#include<iostream>
using namespace std;
// class creat
class Rectangle{
	public:
		int lenght,width,area,P;
		show()
		{
		cout<<"Enter Lenght:";
	 	cin>>lenght;
	 	cout<< "\nEnter Width:";
	    cin>>width;
	     
	    }
};
class Area:public Rectangle{
	public:
		myfun()
		{    area=lenght*width;// formula
	        cout<<"\nThis is Rectangle area : "<<area;
		}
};
int main()
{
	// object creat
	Area obj;
	obj.show();
	obj.myfun();
}
