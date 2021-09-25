#include<iostream>

using namespace std;

class Shape{
    public:
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape() {}
};

class OpenShape : public Shape{
    public:
        virtual  ~OpenShape() {}
};

class ClosedShape : public Shape{
    public:
        virtual ~ClosedShape(){}
};

class Line : public OpenShape{
    public:
        virtual void draw() override{
            cout<<"Line Class : Draw"<<endl;
        }

        virtual void rotate() override{
            cout<<"Line Class : Rotate"<<endl;
        }
};

class Square : public ClosedShape{
    public:
        virtual void draw() override{
            cout<<"Square Class : Draw"<<endl;
        }

        virtual void rotate() override{
            cout<<"Square Class : Rotate"<<endl;
        }
};

int main(){

    Shape *ptr1 = new Line();
    ptr1->draw();
    ptr1->rotate();

    Shape *ptr2 = new Square();
    ptr2->draw();
    ptr2->rotate();

    delete ptr1;
    delete ptr2;

    return 0;
}