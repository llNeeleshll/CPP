#include <iostream>

using namespace std;

int main(){
    
    cout<<"Enter the width of room : ";
    int room_width {0};
    cin>>room_width;

    cout<<"Enter the length of room : ";
    int room_length {0};
    cin>>room_length;

    cout<<"Area of room is : "<<room_width * room_length<<" sq. ft"<<endl;

    return 0;
}