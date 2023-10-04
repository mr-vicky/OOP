#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
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

        int getLength(){
            return length;
        }
        
        int getBreadth(){
            return breadth;
        }

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
    // r1.length = 20; // gives ERROR

    r1.setLength(-20);
    r1.setBreadth(-5);

    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;

    cout << r1.getArea() << endl;
    cout << r1.getPerimeter() << endl;
    
    return 0;
}
