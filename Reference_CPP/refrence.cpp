#include<iostream>
#include<vector>
#include <string>

using namespace std;

int main(){
    vector<string> names {"Neelesh","Is","Awesome"};

    // This will not change the values in the vector as this str variable is a copy
    for(auto str:names){        
        str = "Testing";
    }

    // This will absolutly change the values in the vector as this str variable is a refrence
    for(auto &str:names){        
        str = "Testing";
    }

    for(auto str:names){
        cout<<endl<<str;
    }

    return 0;
    
}

