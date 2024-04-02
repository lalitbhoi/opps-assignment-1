#include<iostream>
using namespace std;
// class creat
class A{
public:
	// function overloading
    int Rectangle, Triangle;
    double breadthCircle;

     show(int Area, int breadth) {
        Rectangle = Area * breadth;
        cout << "Rectangle is : " << Rectangle << endl;
    }

    show(double Area) {
        Triangle = 0.5 * Area;
        cout << "Triangle is : " << Triangle << endl;
    }

     show(float Area, float Pi) {
        breadthCircle = Pi * Area * Area;
        cout << "Circle is : " << breadthCircle << endl;
    }
};

int main() {
    A obj;
    obj.show(10, 20);
    obj.show(3);
    obj.show(5, 3.14);

  
}
