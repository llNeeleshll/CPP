#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <vector <int>> vector_2d {
        {}
    };

    for (int i {0}; i<= 5 ;i++){
        
        vector <int> temp {};

        for (int j {0}; j<=5 ; j++) {
            temp.push_back(4);              
        }        

        vector_2d.push_back(temp);
    }

    return 0;
}