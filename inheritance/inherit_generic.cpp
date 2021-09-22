#include<iostream>

using namespace std;

class Account{

    protected:
        double balance {0};
        string name {"An Account"};

    public:
        void deposit(double amount){
            cout<<"Amount Deposited : "<<amount<<endl;
        }

        void withdraw(double amount){
            cout<<"Amount Withdrawn : "<<amount<<endl;
        }

        Account(){

        }

        ~Account(){

        }
};

class SavingsAccount : public Account{

    protected:
        double interest_rate {3.0};


    public:

        SavingsAccount(){

        }

        ~SavingsAccount(){

        }

        void deposit(double amount){
                cout<<"Amount Deposited : "<<amount<<endl;
        }

        void withdraw(double amount){
            cout<<"Amount Withdrawn : "<<amount<<endl;
        }

};

int main(){

    Account *acc = new Account();

    acc->deposit(200);
    acc->withdraw(300);

    delete acc;

    SavingsAccount *saving_acc = new SavingsAccount();

    saving_acc->deposit(200);
    saving_acc->withdraw(300);

    delete saving_acc;

    return 0;
}