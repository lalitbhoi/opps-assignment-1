#include<iostream>
using namespace std;
//class  creat
class Cal{
 	
 	public:
 		
 		Cal()
 		{ 
 		    int a,b;
 		    cout<<"Enter Number A :  ";
 		    cin>>a;
 		    cout<<"Enter Number B :  ";
 		    cin>>b;
 		    cout <<"addition:"<<a+b; //addition
	        cout <<"\nsubstraction:"<<a-b;//substraction
	        cout <<"\nmultiplication:"<<a*b;//multiplication
	        cout <<"\ndivision:"<<a/b;//division
		 }
 };
int main()
{
	//object creat
	Cal obj;

}
