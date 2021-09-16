#include <iostream>
#include<string>
#include <vector>

using namespace std;

void print_series(const vector<size_t> &series);

int main(){

    int depth {50};
    vector<size_t> series {};

    for(size_t i {0};i<=depth;i++){            
        if(series.size() > 1){
            size_t num {series.at(i-1) + series.at(i-2)};
            series.push_back(num);
        }else{
            series.push_back(i);
        }
    }

    print_series(series);
}

void print_series(const vector<size_t> &series){
    for(auto item : series){
        cout<<item<<" ";
    }
}