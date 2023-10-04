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
    Rectangle r1, r2;
    r1.length = 20;
    r1.breadth = 5;
    
    cout << r1.getArea() << endl;
    
    r2.length = 12;
    r2.breadth = 3;

    cout << r2.getPerimeter() << endl;

    // Accessing using pointers
    Rectangle *p;
    p = &r1;

    p -> length = 10;
    p -> breadth = 5;

    cout << r1.getArea() << endl;
    cout << p -> getArea() << endl;
    
    return 0;
}
