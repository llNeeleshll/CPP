#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> *p {};

    int *q {};

    int score {20};

    cout<<p<<endl;

    // Size of pointer variable would always be same for a given machine
    // Size of pointer represents the address which can be stored.
    cout<<sizeof(p)<<endl;
    cout<<sizeof(q)<<endl;

    cout<<q<<endl;

    q = &score;

    cout<<*q<<endl;

    cout<<score<<endl;

    *q = 500;

    cout<<score<<endl;

    int *k {};

    k = new int;

    *k = 200;

    cout<<*k;

    delete k;

    return 0;
}