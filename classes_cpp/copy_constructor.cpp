#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Player {

    private:
        string name;
        int health {0};
        int xp {0};

    public:
        string get_name(){
            return name;
        }

        int get_health(){
            return health;
        }

        int get_xp(){
            return xp;
        }

        Player(string name_val = "None", int health_val = 0, int xp_val = 0){
            name = name_val;
            health = health_val;
            xp = xp_val;
        }

        Player(const Player &player){
            name = player.name;
            health = player.health;
            xp = player.xp;
            cout<<"In copy"<<endl;
        }

        ~Player(){
            cout<<"Destroying.."<<endl;
        }
};


void display_player(Player player){
    cout<<player.get_name()<<" "<<player.get_health()<<" "<<player.get_xp()<<endl;
}

int main(){

    //Creating object

    Player frank;

    Player frank_2 {frank}; //This will call copy constructor
    
    display_player(frank); //This will call copy constructor

    return 0;
}