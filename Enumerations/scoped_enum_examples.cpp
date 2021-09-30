#include<iostream>
#include<vector>

enum class Direction {
    North,
    South,
    East,
    West
};


enum class Street {
    North,
    Main,
    SubMain
};

using namespace std; 

int main(){

    Direction dir {};

    dir = Direction::North;

    switch (dir){

    case Direction::North:
        cout<<"It's North"<<endl;
        break;
    
    default:
        cout<<"Otherwise"<<endl;
        break;
    }

    int direction_number = underlying_type_t<Direction>(Direction::North);

    vector<Direction> dir_vec {};

    dir_vec.push_back(Direction::North);
    dir_vec.push_back(Direction::East);

    for(auto &dv : dir_vec){
        cout<<underlying_type_t<Direction>(dv)<<endl;
    }

    return 0;
}

