#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
void display(vector<T> &vec){
    cout<<"[ ";

    for(auto &v : vec){
        cout<<v<<" ";
    }

    cout<<"]"<<endl;
}

int main(){

    vector<int> vec {10,20,30};
    display(vec);
    cout<<"Capacity : "<<vec.capacity()<<endl;

    //Create vector of 20 values and all 100
    vector<int> vec1(20,100);
    vec1.push_back(50);
    display(vec1);

    //See the capacity is doubled. 
    cout<<"Capacity : "<<vec1.capacity()<<endl;

    //Shrink to fit vector so capacity would be equal to number of elements
    vec1.shrink_to_fit();
    cout<<"New Capacity : "<<vec1.capacity()<<endl;

    //Let's concatinate both vectors
    copy(vec.begin(), vec.end(), back_inserter(vec1));
    display(vec1);
    vec1.shrink_to_fit();
    cout<<"New Capacity : "<<vec1.capacity()<<endl;

    //Let's multiply
    vector<int> vec2;
    transform(vec.begin(), vec.end(), vec1.begin(), back_inserter(vec2), [](int x, int y){
        return x * y;
    });
    display(vec2);
    vec2.shrink_to_fit();
    cout<<"Multiplied Vector Capacity : "<<vec2.capacity()<<endl; 

    return 0;
}