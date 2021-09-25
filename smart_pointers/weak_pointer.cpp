#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class B;

class A{
    shared_ptr<B> b_ptr;

    public:
        void set_B(shared_ptr<B> &b){
            this->b_ptr = b;
        }

        A(){
            cout<<"A Constructor"<<endl;
        }

        ~A(){
            cout<<"A Destructor"<<endl;
        }
};

class B{

    //Keeping this as shared_ptr will create a circular reference and 
    //thus will not call destructor to clear the memory
    //shared_ptr<A> a_ptr;

    //Keeping this as weak_ptr will remove the circular reference and 
    //thus will call destructor to clear the memory
    weak_ptr<A> a_ptr;

    public:
        void set_A(shared_ptr<A> &a){
            this->a_ptr = a;
        }

        B(){
            cout<<"B Constructor"<<endl;
        }

        ~B(){
            cout<<"B Destructor"<<endl;
        }
};

int main(){
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    a->set_B(b);
    b->set_A(a);

    return 0;
}