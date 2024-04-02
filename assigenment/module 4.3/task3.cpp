#include<iostream>
using namespace std;
//class creat
class Car{
	private:
		int year;
		string company,model;
		public:
			    // get data
				getdata(string company,string model,int year)
			{
				this->company=company;
				this->model=model;
			    this->year=year;
			}
			// set data 
			setdata()
			{
				cout<<"\ncompany: "<<company;
				cout<<"\nmodel: "<<model;
				cout<<"\nyear: "<<year;
			}
};
int main()
{
	//object creat 
	Car obj;
	obj.getdata("Tata","Punch",2023);
	obj.setdata();
}
