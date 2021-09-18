#include <iostream>

using namespace std;

void double_value(int *val_ptr){
    *val_ptr *= 2;
}

int main(){

    int value {10};
    int *val_ptr {};

    val_ptr = &value;

    double_value(&value);
    cout<<"Value is : "<<value<<endl;

    double_value(val_ptr);
    cout<<"Another Value is : "<<value;
    
    return 0;
}