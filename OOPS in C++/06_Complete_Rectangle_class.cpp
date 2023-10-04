#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &rect);
        void setLength(int l);
        void setBreadth(int b);
        int getLength(){return length;}; // Inline function
        int getBreadth(){return breadth;}; // Inline function
        int getArea();
        int getPerimeter();
        bool isSquare();
        ~Rectangle(); // Distructor
};

int main()
{   
    Rectangle r1(4, 4);
    cout << r1.getArea() << endl;
    if(r1.isSquare()){
        cout << "Yes, its a square." << endl;
    }

    return 0;
}

// Non-Inline functions -->
Rectangle::Rectangle(){
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b){
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect){
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle::setLength(int l){
    length = l;
}

void Rectangle::setBreadth(int b){
    breadth = b;
}

int Rectangle::getArea(){
    return length * breadth;
}

int Rectangle::getPerimeter(){
    return 2 * (length + breadth);
}

bool Rectangle::isSquare(){
    return length == breadth;
}

Rectangle::~Rectangle(){    
    cout << "Rectangle Destroyed..." << endl;
}
