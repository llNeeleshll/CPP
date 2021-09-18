#include<iostream>

using namespace std;

void swap(int *a, int *b);
int *largest_value(int *a, int *b);

int main(){

    int x {10};
    int y {20};

    cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;

    swap(&x, &y);

    cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;

    int *large_value {};

    large_value = largest_value(&x,&y);

    cout<<"Bigger value is : "<<*large_value;

    return 0;
}

void swap(int *a, int *b){
    int temp {*a};
    *a = *b;
    *b = temp;
}

int *largest_value(int *a, int *b){
    if (*a > *b){
        return a;
    }else{
        return b;
    }
}