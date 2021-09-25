#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class A{
    public:
        
        A(){
            cout<<"A Constructor"<<endl;
        }

        ~A(){
            cout<<"A Destructor"<<endl;
        }
};

//Custom deleter methor which will be called when a smart pointer is getting deleted
void my_custom_delete(A *ptr_a){
    cout<<"Deleteing Pointer."<<endl;
    delete ptr_a;
}

int main(){
    shared_ptr<A> a {new A,my_custom_delete};

    return 0;
}