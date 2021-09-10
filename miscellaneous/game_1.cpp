#include<iostream>

using namespace std;

int main(){

    int chosen {45};
    int user_choice {};

    bool start_game {true};

    cout<<"I've Chosen a number."<<endl;

    int chances = 5;

    do{
        cout<<"\nTell me what is it? "<<"You've "<<chances--<<" chances : ";
        cin>>user_choice;

        if(user_choice > chosen){
            cout<<"The number you've chosen is large, try smaller number.";
        }else if(user_choice < chosen){
            cout<<"The number you've chosen is small, try larger number.";
        }else{
            cout<<"Perfect you won!!";
            start_game = false;
        }

        if (chances == 0){
            cout<<"You're out of chances. Bye Bye!";
            start_game = false;
        }

    }while(start_game);

    return 0;
}