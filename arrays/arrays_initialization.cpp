#include <iostream>

using namespace std;

int main(){

    int x[] {1,2,3};

    cout << x[0] <<endl;

    x[0] = 55;

    cout << x[0];

    //Get five numbers
    int num[3];

    cin>>num[0]>>num[1]>>num[2];

    cout<<"You've said : "<< num[0]<< " "<<num[1]<<" "<<num[2]<<endl; 

    cout<<"Address : "<<&num[2]; 

    return 0;
}