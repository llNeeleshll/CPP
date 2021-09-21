#include <iostream>
#include<vector>

using namespace std;

class Player{

    private:

        static int num_of_players;

    public:

        static void display_num_players(){
            cout<<"As of now there are "<< num_of_players << " player(s) active."<<endl;
        } 

        Player(){
            cout<<"Creating"<<endl;
            num_of_players++;
        }

        ~Player(){
            cout<<"Destroying"<<endl;
            num_of_players--;
        }
};

int Player::num_of_players {0};

int main(){
    Player::display_num_players();

    vector<Player> players;

    for (size_t i = 0; i < 100; i++)
    {
         Player play;
         players.push_back(play);
    }   
   

    Player::display_num_players();
    return 0;
}