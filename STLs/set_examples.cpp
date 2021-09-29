#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

template<typename T>
void display(set<T> &l){
    cout<<"[ ";

    for(auto &d : l){
        cout<<d<<" ";
    }

    cout<<"]"<<endl;
}

int main(){

    set<int> s1 {10,20,60};
    display(s1);

    s1.insert(15);
    display(s1);

    //Let's find ca values
    auto it = s1.find(20);

    if(it != s1.end()){
        cout<<"Found : "<<*it<<endl;
    }

    if(s1.count(30) == 1){
        cout<<"30 is in the set.";
    }else{
        cout<<"30 is not in the set.";
    }

    return 0;
}