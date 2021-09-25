#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class Account{

    private:
        float balance;
    public:

        Account(){

        }

        Account(float balance){
            this->balance = balance;
        }

        void deposit(float amt){
            balance += amt;
        }

        void check_balance(){
            cout<<"The balance is : "<<balance<<endl;
        }
};

int main(){
    
    Account acc {0.0};

    acc.deposit(400.0);
    acc.check_balance();

    //using smart pointer
    unique_ptr<Account> act_ptr1 {new Account{500}};
    act_ptr1->deposit(300);
    act_ptr1->check_balance();

    //using smart pointer
    unique_ptr<Account> act_ptr2 = make_unique<Account>(900);
    act_ptr2->deposit(900);
    act_ptr2->check_balance();

    //Move the pointer to new one and clear the old pointer
    unique_ptr<Account> act_ptr3;
    act_ptr3 = move(act_ptr2);

    if(!act_ptr2){
        cout<<"Pointer 2 is empty"<<endl;
    }else{
        act_ptr2->deposit(900);
        act_ptr2->check_balance();
    }

    if(!act_ptr3){
        cout<<"Pointer 2 is empty"<<endl;
    }else{
        act_ptr3->deposit(900);
        act_ptr3->check_balance();
    }

    //Let's try vectors
    vector<unique_ptr<Account>> accounts_ptr;

    accounts_ptr.push_back(make_unique<Account>(100));
    accounts_ptr.push_back(make_unique<Account>(1000));
    accounts_ptr.push_back(make_unique<Account>(10000));

    //Since we can't do copy therefore we need reference in ptr variable
    for(auto const &ptr : accounts_ptr){
        ptr->check_balance();
    }

    return 0;
}