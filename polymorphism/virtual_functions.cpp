/**
 * Not using Virtual Keyword will cause the base methor say_hello() to be called from every pointer
 * 
 * 
 * **/
#include<iostream>
#include<vector>

using namespace std;


class Account{
    public:
        virtual void say_hello(){
            cout<<"Account : Saying Hello"<<endl;
        }
        virtual ~Account(){};
};

class SavingAccount : public Account{
    public:
        virtual void say_hello(){
            cout<<"Saving Account : Saying Hello"<<endl;
        }
        virtual ~SavingAccount(){};
};

class FixedAccount : public Account{
    public:
        virtual void say_hello(){
            cout<<"Fixed Account : Saying Hello"<<endl;
        }

        virtual ~FixedAccount(){};
};

class TrustAccount : public Account{
    public:
        virtual void say_hello(){
            cout<<"Trust Account : Saying Hello"<<endl;
        }

        virtual ~ TrustAccount(){};
};

int main(){

    Account *p1 = new Account;
    Account *p2 = new SavingAccount;
    Account *p3 = new FixedAccount;
    Account *p4 = new TrustAccount;

    vector<Account *> acc_ptrs {p1,p2,p3,p4};

    for(auto ptr : acc_ptrs){
        ptr->say_hello();
    }

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}