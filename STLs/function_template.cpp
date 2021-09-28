#include<iostream>

using namespace std;


template<typename T>
T maximum(T a,T b){
    return (a > b) ? a : b;
}

template<typename T>
T add_numbers(T a,T b){
    return a+b;
}

template<typename T>
void mp_swap(T &a,T &b){
    T temp {};
    temp = a;
    a = b;
    b = temp;
}

template<typename T1, typename T2>
void print_values(T1 a,T2 b){
    cout<<"Values are : "<<a<<" and "<<b;
}

int main(){
    int x {10};
    int y {30};

    cout<< maximum<int>(1,2)<<endl;
    cout<< add_numbers<int>(3,4)<<endl;
    print_values<int,string>(23,"This is awesome");

    cout<<endl<<"Before Swap : "<<x<<" "<<y;
    mp_swap<int>(x,y);
    cout<<endl<<"After Swap : "<<x<<" "<<y;
    
    return 0;
}