#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
void display(deque<T> &dec){
    cout<<"[ ";

    for(auto &d : dec){
        cout<<d<<" ";
    }

    cout<<"]"<<endl;
}

int main(){

    deque<int> dec {10,20,30};
    display(dec);

    //Create deque of 20 values and all 100
    deque<int> d1(20,100);
    d1.push_back(50);
    d1.push_front(50);
    d1.at(15) = 49;
    display(d1);

    d1.pop_back();
    d1.pop_front();
    display(d1);

    
    //Let's reverse a vector
    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    deque<int> d;

    for(auto &v_item : v){
        d.push_front(v_item);
    }
    cout<<"Reverse : "<<endl;
    display(d);

    // //Let's multiply
    // vector<int> vec2;
    // transform(vec.begin(), vec.end(), vec1.begin(), back_inserter(vec2), [](int x, int y){
    //     return x * y;
    // });
    // display(vec2);
    // vec2.shrink_to_fit();
    // cout<<"Multiplied Vector Capacity : "<<vec2.capacity()<<endl; 

    return 0;
}