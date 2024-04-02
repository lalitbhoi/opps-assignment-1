#include<iostream>
using namespace std;
// class creat
class M 
{
private:
	// data member
   int A, B;
public:

    input() 
   {
       cout << "Enter two numbers:";
       cin >> A>>B;
   }

   friend  find(M t);//friend function 
};

 find(M t) 
{
   if (t.A > t.B) // if statmenet
   {
       cout << "Largest is:" << t.A;
   } 
   else
   {
       cout << "Largest is:" << t.B;
   }
}

int main() 
{
	// object creat 

   M obj;
   obj.input();
   find(obj);

}
