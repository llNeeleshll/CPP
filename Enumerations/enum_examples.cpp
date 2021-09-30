#include<iostream>
#include<vector>

enum Direction {
    North,
    South,
    East,
    West
};

//Cannot create Street as this has same key as direction and is unscoped.

// enum Street {
//     North,
//     Main,
//     SubMain
// };

using namespace std; 

int main(){

    Direction dir {};

    dir = North;

    switch (dir){

    case North:
        cout<<"It's North"<<endl;
        break;
    
    default:
        cout<<"Otherwise"<<endl;
        break;
    }

    vector<Direction> dir_vec {};

    dir_vec.push_back(North);
    dir_vec.push_back(East);

    for(auto &dv : dir_vec){
        cout<<dv<<endl;
    }

    return 0;
}

