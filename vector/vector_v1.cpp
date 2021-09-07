#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> test_score {1,2,3,4,5};

    test_score.at(3) = 10;
    cout<<test_score.at(3)<<endl;

    test_score.push_back(99);
    cout<<test_score[5]<<endl;

    cout<<test_score.size()<<endl;

    //Creating 100 items each assigned value 3
    vector <int> x (10,3);

    cout<<"X : "<<x.size();

    for(int i=0;i<x.size();i++){
        cout<<x.at(i)<<endl;
    }

    //2D vector

    vector <vector<int>> moview_rating 
    {
        {1,2,3},
        {4,5,6},
        {6,7,8}
    };

    cout<<"==============================="<<endl;

    cout<<"Element : "<<moview_rating.at(2).at(2);

    return 0;
}