#include<iostream>
// class creat
using namespace std;
class person{
	// private access modifier 
	private:
		int age;
		string name,country;
		// private access modifier 
		public:
			getdata(string name,string country,int age)
			{
				this->name=name;
				this->country=country;
			    this->age=age;
			}
			setdata()
			{
				cout<<"\nname: "<<name;
				cout<<"\ncountry: "<<country;
				cout<<"\nage: "<<age;
			}
};
int main()
{
	//object creat
	person obj;
	obj.getdata("Aarohi","Botad",23);
	obj.setdata();
}
