#include<iostream>
#include<queue>
#include<list>
#include<algorithm>

using namespace std;

template<typename T>
void display(queue<T> s){
    cout<<"[ ";

    while(!s.empty()){
        cout<<s.front()<<" "; //Pull form front
        s.pop();
    }

    cout<<"]"<<endl;
}

int main(){

    //Uses deque by default as underlying container
    queue<int> q1;


    for (size_t i = 0; i < 20; i++){
        q1.push(i); //Push from back
    }

    
    display(q1);

    //display(s2);

    cout<<"There are "<<q1.size()<<" items in the stack."<<endl;

    q1.push(100);
    display(q1);

    q1.pop();
    q1.pop();
    display(q1);

    //Replace front and back
    q1.front() = 99;
    q1.back() = 99;

    display(q1);

    //clear queue
    while(!q1.empty()){
        q1.pop();
    }
    
    display(q1);

    

    return 0;
}