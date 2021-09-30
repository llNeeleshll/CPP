#include<iostream>
#include<stack>
#include<list>
#include<algorithm>

using namespace std;

template<typename T>
void display(stack<T> s){
    cout<<"[ ";

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<"]"<<endl;
}

int main(){

    //Uses deque by default as underlying container
    stack<int> s1;

    //Users list as underlying container
    stack<int, list<int>> s2;

    for (size_t i = 0; i < 20; i++){
        s1.push(i);
    }

    for (int i = 20; i >= 0; i--){
        s2.push(i);
    }
    
    display(s1);

    //display(s2);

    cout<<"There are "<<s1.size()<<" items in the stack.";

    

    

    return 0;
}