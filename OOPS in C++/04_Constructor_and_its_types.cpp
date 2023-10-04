#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        // Type 1: Default constructor or Non-parameterized constructor 
        Rectangle(){
            length = 0;
            breadth = 0;
        }

        // Type 2: Non-parameterized constructor
        Rectangle(int l, int b){
            setLength(l);
            setBreadth(b);
        }

        // Type 1: Copy constructor
        Rectangle(Rectangle &rect){
            length = rect.length;
            breadth = rect.breadth;
        }

        // Mutators ->
        void setLength(int l){
            if(l <= 0){
                cout << "Length is invalid!" << endl;
                length = 0;
            }
            else {
                length = l;
            }
        }

        void setBreadth(int b){
            if(b <= 0){
                cout << "Breadth is invalid!" << endl;
                breadth = 0;
            }
            else{
                breadth = b;
            }
        }
        
        // Accessors -> 
        int getLength(){
            return length;
        }
        
        int getBreadth(){
            return breadth;
        }

        // Facilitators
        int getArea(){
            return length * breadth;
        }

        int getPerimeter(){
            return 2 * (length + breadth);
        }
};


int main()
{   
    // Default constructor
    Rectangle r1;
    cout << r1.getArea() << endl;

    // Parameterized constructor
    Rectangle r2(2,4);
    cout << r2.getArea() << endl;

    // Copy constructor
    Rectangle r3(r2);
    cout << r3.getArea() << endl;

    return 0;
}
