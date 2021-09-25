vector<unique_ptr<Account>> accounts_ptr;

    // accounts_ptr.push_back(make_unique<Account>(100));
    // accounts_ptr.push_back(make_unique<Account>(1000));
    // accounts_ptr.push_back(make_unique<Account>(10000));

    // //Since we can't do copy therefore we need reference in ptr variable
    // for(auto const &ptr : accounts_ptr){
    //     ptr->check_balance();
    // }