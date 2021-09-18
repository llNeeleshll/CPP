#include<iostream>

using namespace std;

int *create_array(int size, int value);
void display_array(const int *array, int size);

int main(){

    int *int_array {};
    int size;

    cout<<"What would be the length of array? ";
    cin>>size;

    // int_array = new int[size];

    // cout<<"Now enter the values followed by enter : ";

    // for(int i {0};i<size;i++){
    //     cin>>int_array[i];
    // }

    // cout<<"You'd entered : ";

    // for(int i {0};i<size;i++){
    //     cout<<int_array[i]<<" ";
    // }

    int_array = create_array(size, 20);

    display_array(int_array, size);

    delete [] int_array;

    return 0;
}

int *create_array(int size, int value){
    int *array {};
    array = new int[size];

    for(int i {};i<size;i++){
        *(array + i) = value;
    }

    return array;
}

void display_array(const int *array, int size){
    cout<<"Following is the array : ";
    for(int i {};i<size;i++){
        cout<<*(array + i)<<" ";
    }
    cout<<endl;
}