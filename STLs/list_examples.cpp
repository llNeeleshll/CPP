#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
void display(list<T> &l){
    cout<<"[ ";

    for(auto &d : l){
        cout<<d<<" ";
    }

    cout<<"]"<<endl;
}

int main(){

    list<int> l1 {10,20,60};
    display(l1);

    //Create deque of 20 values and all 100
    list<int> d1(20,100);
    d1.push_back(50);
    d1.push_front(50);
    display(d1);

    d1.pop_back();
    d1.pop_front();
    display(d1);

    //Let's insert in the list at any place
    auto it = find(l1.begin(),l1.end(),20);
    //Insert before the element where itterator is pointing.
    l1.insert(it,30);
    display(l1);

    //Point to currently added item and remove it
    it--;
    l1.erase(it);
    display(l1);

    

    return 0;
}