#include <iostream>

using namespace std;

int main(){

    double amount;

    cout<<"Enter a cents amount :";
    cin>>amount;

    const int dollar_cents = 100;
    const int quarter_cents = 25;
    const int dime_cents = 10;
    const int nickle_cents = 5;
    const int penny_cents = 1;

    int dollar {}, quarter {}, dime {}, nickle {}, penny {};
    double balance {};

    dollar = amount / dollar_cents;
    balance = amount - (dollar * dollar_cents);

    quarter = balance / quarter_cents;
    balance = balance - (quarter * quarter_cents);

    dime = balance / dime_cents;
    balance = balance - (dime * dime_cents);

    nickle = balance / nickle_cents;
    balance = balance - (nickle * nickle_cents);

    penny = balance / penny_cents;
    balance = balance - (penny * penny_cents);

    cout<< "Dollar : "<<dollar<<endl;
    cout<< "Quater : "<<quarter<<endl;
    cout<< "Dime : "<<dime<<endl;
    cout<< "Nickle : "<<nickle<<endl;
    cout<< "Penny : "<<penny<<endl;

    return 0;

}