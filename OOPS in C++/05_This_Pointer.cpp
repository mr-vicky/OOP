#include<iostream>
using namespace std;
// 'this' pointer is used to point the data members of object

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        void setLength(int length){
            if(length <= 0){
                cout << "Length is invalid!" << endl;
                this -> length = length = 0;
            }
            else {
                this -> length = length;
            }
        }

        void setBreadth(int breadth){
            if(breadth <= 0){
                cout << "Breadth is invalid!" << endl;
                this -> breadth = breadth;
            }
            else{
                this -> breadth = breadth;
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

    r1.setLength(20);
    r1.setBreadth(5);

    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;

    cout << r1.getArea() << endl;
    cout << r1.getPerimeter() << endl;
    
    return 0;
}
