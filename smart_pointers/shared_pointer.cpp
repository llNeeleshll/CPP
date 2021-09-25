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
    shared_ptr<Account> act_ptr1 {new Account{500}};
    act_ptr1->deposit(300);
    act_ptr1->check_balance();

    //using smart pointer
    shared_ptr<Account> act_ptr2 = make_shared<Account>(900);
    act_ptr2->deposit(900);
    act_ptr2->check_balance();

    //Here both the pointers will refer to same memory in heap thus increasing count of memory reference as 2
    shared_ptr<Account> act_ptr3;
    act_ptr3 = act_ptr2;

    cout<<"Number of pointers referring to Memory : "<<act_ptr3.use_count()<<endl;

    //Both will print the same balance as they are referring to same object in memory
    act_ptr2->check_balance();
    act_ptr3->check_balance();

    // Resetting one pointer so the use count would be 1
    act_ptr2.reset();
    cout<<"Number of pointers referring to Memory : "<<act_ptr3.use_count()<<endl;

    //Let's try vectors
    vector<shared_ptr<Account>> accounts_ptr;

    accounts_ptr.push_back(make_shared<Account>(100));
    accounts_ptr.push_back(make_shared<Account>(1000));
    accounts_ptr.push_back(make_shared<Account>(10000));

    //Since we can't do copy therefore we need reference in ptr variable
    for(auto const ptr : accounts_ptr){
        ptr->check_balance();
    }

    return 0;
}