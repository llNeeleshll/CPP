#include<iostream>

using namespace std;

int main(){

    int *int_array {};
    int size;

    cout<<"What would be the length of array? ";
    cin>>size;

    int_array = new int[size];

    cout<<"Now enter the values followed by enter : ";

    for(int i {0};i<size;i++){
        cin>>int_array[i];
    }

    cout<<"You'd entered : ";

    for(int i {0};i<size;i++){
        cout<<int_array[i]<<" ";
    }

    delete [] int_array;

    return 0;
}