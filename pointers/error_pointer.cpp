#include<iostream>

using namespace std;

int *test();

void another(){
    cout<<endl;
    for(int i {};i<=100;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    int *test_ptr {};

    test_ptr = test();

    another();
        
    cout<<"Out function : "<<*test_ptr;

    return 0;
}

int *test(){

    int test_val {10};
    int *test_ptr {};

    test_ptr = &test_val;

    cout<<"In function : "<<*test_ptr<<endl;

    return test_ptr;
}
