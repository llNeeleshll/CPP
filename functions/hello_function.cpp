#include<iostream>
#include<vector>

using namespace std;

void say_hello();
void pass_by_value(vector<string>);
void print_vector(vector<string>);

int main(){
    vector<string> v {"Neelesh", "Is", "Awesome"};
    print_vector(v);
    pass_by_value(v);
    print_vector(v);
    return 0;
}

void pass_by_value(vector<string> v){
    v.clear();
}

void print_vector(vector<string> v){
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void say_hello(){
    cout<<"Hello";
}