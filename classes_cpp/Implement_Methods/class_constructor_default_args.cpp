#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        string name {"No Name"};
        bool can_fly;
        int altitude;

    public:

        // Single constructor with default param suffice the purpose

        Animal(string name_of_animal = "None", bool can_fly_ = false, int altitude_ = 0){
            name = name_of_animal;
            can_fly = can_fly_;
            altitude = altitude_;
        }

        // OR CAN BE USED AS FOLLOWING. THE FOLLOWING WAY IS INITIALIZATION AND NOT ASSIGNMENT
        
        // Animal(string name_of_animal, bool can_fly_, int altitude_) : name {name_of_animal}, can_fly {can_fly_}, altitude {altitude_} {
            
        // }

        string get_name(){
            return name;
        }

        long get_altitude(){
            return altitude;
        }
};

int main(){

    Animal dog {"Dog", false};

    cout<<dog.get_name()<<endl;

    Animal bat {"Bat", true, 40};

    cout<<bat.get_name()<< " can fly upto "<<bat.get_altitude()<<endl;
    
    Animal cat;

    cout<<cat.get_name()<<endl;

    return 0;
}