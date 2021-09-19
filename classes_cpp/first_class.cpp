#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Player {

    string name;
    int health {0};
    int xp {0};

    void talk(string);
    bool is_dead();
};

class Account{
    string name;
    double balance;

    bool deposit(double bal);
    bool withdraw(double bal);
};

int main(){

    //Creating object

    Player frank;
    Player hero;

    // Creating object on heap
    Player *enemy {};
    enemy = new Player;

    Player players[] {frank, hero};

    delete enemy;

    return 0;
}