#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string user_text {};

    cout<<"Let me know what you waht in the new file? : ";
    getline(cin, user_text);

    ofstream file {};

    file.open("test_write.txt");

    if(file){
        file<<user_text<<endl;
    }

    file.close();
}