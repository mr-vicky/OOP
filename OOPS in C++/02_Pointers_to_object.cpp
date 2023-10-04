#include<iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;

        int getArea(){
            return length * breadth;
        }

        int getPerimeter(){
            return 2 * (length + breadth);
        }
};


int main()
{
    Rectangle r1;

    // Accessing using pointers -->
    // Creating object in stack :  
    Rectangle *p;
    p = &r1;

    p -> length = 10;
    p -> breadth = 5;

    cout << r1.getArea() << endl;
    cout << p -> getArea() << endl;


    // Creating the object in heap :
    Rectangle *q = new Rectangle;

    q -> length = 4;
    q -> breadth = 6;

    cout << q -> getArea() << endl;
    cout << q -> getPerimeter() << endl;
    
    return 0;
}
