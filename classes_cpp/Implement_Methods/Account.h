#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include<string>

class Account{

    private:
        std::string name {};
        double balance {};

    public:

        void set_balance(double amount){
            balance = amount;
        }

        double get_balance(){
            return balance;
        }

        void set_name(std::string name);
        std::string get_name();

        bool deposit(double bal);
        bool withdraw(double bal);
};

void Account::set_name(std::string n){
    name = n;
}

std::string Account::get_name(){
    return name;
}

bool Account::deposit(double bal){
    balance += bal;
    return true;
}

bool Account::withdraw(double bal){
    if (balance-bal > 0){
        balance -= bal;
        return true;
    }
    else{
        return false;
    }
    balance -= bal;
}

#endif