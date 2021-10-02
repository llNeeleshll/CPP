#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<double> temperatures {87.9,77.9,80.0,72.5,95};
    double mean {0};

    for (auto i : temperatures){
        mean += i;    
    }

    mean /= temperatures.size();

    cout <<"Mean of temperatures is : "<<mean;

    return 0;
}