#include <iostream>
#include "Account.h"

using namespace std;

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