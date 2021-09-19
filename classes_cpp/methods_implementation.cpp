#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Account{

    private:
        string name {};
        double balance {};

    public:

        void set_balance(double amount){
            balance = amount;
        }

        double get_balance(){
            return balance;
        }

        void set_name(string name);
        string get_name();

        bool deposit(double bal);
        bool withdraw(double bal);
};

void Account::set_name(string n){
    name = n;
}

string Account::get_name(){
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


int main(){
    Account *acc_ptr {new Account};

    acc_ptr->set_name("Frank's Account");
    acc_ptr->set_balance(1000.0);

    if(acc_ptr->deposit(200.0)){
        cout<<"Deposited"<<endl;
    }else{
        cout<<"Deposit Not allowed"<<endl;
    }

    if(acc_ptr->withdraw(500.0)){
        cout<<"Successfully Withdrawn"<<endl;
    }else{
        cout<<"Not sufficient funds!"<<endl;
    }

    if(acc_ptr->withdraw(2500.0)){
        cout<<"Successfully Withdrawn"<<endl;
    }else{
        cout<<"Not sufficient funds!"<<endl;
    }

    return 0;
}