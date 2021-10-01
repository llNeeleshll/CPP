#include<iostream>
#include<string>

using namespace std;

double calculate(int miles, int gallons){
    if (gallons == 0){
        throw 0;
    }

    if(miles < 0){
        throw string {"Negative values"};
    }
    return static_cast<double>(miles)/gallons;
}

int main(){

    try{
        cout<<"Answer : "<<calculate(-10,10);
    }catch(int &ex){
        cerr<<"Divide by zero?"<<endl;
    }catch(string &ex){
        cerr<<ex;
    }catch(...){
        cerr<<"Unknown Error";
    }

    return 0;
}