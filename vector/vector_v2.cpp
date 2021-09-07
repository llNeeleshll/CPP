#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector <int> vector_1;
    vector <int> vector_2;

    //Adding values to v1
    vector_1.push_back(10);
    vector_1.push_back(20);

    cout<<"===================Vector 1==================="<<endl;

    for (int i = 0; i < vector_1.size(); i++)
    {
        cout<<"Value at "<<i<<" is "<<vector_1.at(i)<<endl;
    }

    //Adding values to v2
    vector_2.push_back(100);
    vector_2.push_back(200);

    cout<<"===================Vector 2==================="<<endl;

    for (int i = 0; i < vector_2.size(); i++)
    {
        cout<<"Value at "<<i<<" is "<<vector_2.at(i)<<endl;
    }

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout<<"===================Vector 2D==================="<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Value at ["<<i<<","<<j<<"] is "<<vector_2d.at(i).at(j)<<endl;
        }   
    }
    
    return 0;
}