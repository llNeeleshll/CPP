#include <iostream>
#include<vector>
#include<string>

using namespace std;

void change(int &a);
void pass_by_ref(vector<string> &v);
void print_vector(const vector<string> &v);

int main(){
    int a{50};
    cout<<"Value before passing : "<<a<<endl;
    change(a);
    cout<<"Value after passing : "<<a<<endl;

    vector<string> v {"Neelesh", "Is", "Awesome"};

    cout<<endl<<"Value before passing : ";
    print_vector(v);
    pass_by_ref(v);

    cout<<endl<<"Value after passing : ";
    print_vector(v);

    return 0;
}

void change(int &a){
    a = 100;
}

void pass_by_ref(vector<string> &v){
    v.clear();
}

void print_vector(const vector<string> &v){
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}