#include<iostream>
using namespace std;
// class creat
class Rectangle{
	private:
	 	int lenght,width,area,P;
	 public:
	 	// function creat
	 	show()
		{
		 cout<<"Enter Lenght:";
	 	cin>>lenght;
	 	cout<< "Enter Width:";
	    cin>>width;
	    area=lenght*width;
	    cout<< "area is:"<<area;
	    P = 2*(lenght + width) ;
	    cout<< " \nperimeter is:"<<P;
	    
	}
};
int main()
{
	//object creat
	Rectangle obj;
	obj.show();
}
