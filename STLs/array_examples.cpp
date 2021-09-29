#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

int main(){
    array<int, 5> arr1 {1,3,4,5,2};   
    array<int, 5> arr2;

    arr2.fill(1);

    cout<<"ARR1 : "<<arr1.size()<<endl;
    cout<<"ARR2 : "<<arr2.size()<<endl;

    cout<<"Value at 2 : "<<arr1.at(2)<<endl;

    cout<<"Value at back : "<<arr1.back()<<endl;

    sort(arr1.begin(), arr1.end());

    auto it = arr1.begin();

    while(it != arr1.end()){
        cout<<*it++<<" ";
    }

    return 0;
}