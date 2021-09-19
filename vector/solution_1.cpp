#include <iostream>
#include <vector>
using namespace std;

int count_numbers() {
    //---- WRITE YOUR CODE BELOW THIS LINE----

    vector<int> vec {1,5,6,5,8};

    int count {0};
    int i {0};
    
    while(vec[i] != -99 && i < vec.size()){
        count++;
        i++;
    }
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

int main(){
   
    int count {count_numbers()};
    cout<<count;
    return 0;
}