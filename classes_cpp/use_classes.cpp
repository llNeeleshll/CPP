#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Player {

    public:
        string name;
        int health {0};
        int xp {0};

        void talk(string text){
            cout<<name<<" says "<<text;
        }

        bool is_dead();
};

class Account{
    public:
        string name;
        double balance;

        bool deposit(double bal);
        bool withdraw(double bal);
};

int main(){

    Player frank;

    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("Hi There");

    Player *enemy {};
    enemy = new Player;

    enemy->name = "Enemy";
    enemy->health = 100;
    enemy->xp = 15;

    enemy->talk("I'll destroy you");
    delete enemy;

    return 0;
}