#include<iostream>
#include<map>
#include<algorithm>
#include<list>

using namespace std;

template<typename T1, typename T2>
void display(map<T1, T2> &l){
    cout<<"========================================================="<<endl;
    for(auto &d : l){
        cout<<d.first<<" : "<<d.second<<endl;
    }
    cout<<"========================================================="<<endl<<endl;
}

void display(map<string, list<int>> &l){
    cout<<"========================================================="<<endl;
    for(auto &d : l){
        cout<<d.first<<" : ";
        for(auto &list_item : d.second){
            cout<<list_item<<" ";
        }
        cout<<endl;
    }
    cout<<"========================================================="<<endl<<endl;
}

int main(){

    map<string,string> cities;

    cities["Mumbai"] = "India";
    cities["Jaipur"] = "India";
    cities["Tokyo"] = "Japan";

    display<string,string>(cities);

    cities.insert(pair<string,string>("Toronto","Canada"));
    display<string,string>(cities);

    //Check if the key is there already
    auto it = cities.find("Delhi");

    //This means that the key is not present
    if(it == cities.end()){
        cities["Delhi"] = "India";
        display<string,string>(cities);
    }

    //Let"s have a complex set
    map<string,list<int>> students_marks {};

    list<int> l1 {100,90,95};
    list<int> l2 {10,30,35};

    students_marks["0205EC071061"] = l1;
    students_marks["0205EC071062"] = l2;

    display(students_marks);

    return 0;
}