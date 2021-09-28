#include<iostream>
#include<vector>
#include<list>
#include<map>

using namespace std;

void vector_itt(){
    vector<int> v {1,2,3,4,5};

    auto it = v.begin();

    cout<<"[ ";
    while(it != v.end()){
        cout<<*it++<< " ";
    }
    cout<<"]";
}

void list_itt(){

    list<string> names {"Neelesh", "Frank", "Elon"};

    auto it = names.begin();

    cout<<"[ ";
    while(it != names.end()){
        cout<<*it++<< " ";
    }
    cout<<"]";

}

void list_itt_rev(){

    list<string> names {"Neelesh", "Frank", "Elon"};

    auto it = names.rbegin();

    cout<<"[ ";
    while(it != names.rend()){
        cout<<*it++<< " ";
    }
    cout<<"]";

}

void map_itt(){

    map<string,string> key_values {{"Neelesh","Python"},{"Frank","C++"}};

    auto it = key_values.begin();

    while(it != key_values.end()){
        cout<<it->first<< " : "<<it->second<<endl;
        *it++;
    }

}

int main(){
    map_itt();
    return 0;
}