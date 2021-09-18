#include <iostream>

using namespace std;

int main(){

    int scores[] = {100,200,300,400,-1};
    int *score_ptr {scores};

    while (*score_ptr != -1){
        cout<<*score_ptr++<<" ";
    }

    char name[] {"Neelesh"};
    char *char_ptr_1 {&name[0]};
    char *char_ptr_2 {&name[3]};

    cout<<"In the string "<<name<<", "<<*char_ptr_2<<" is "<<(char_ptr_2 - char_ptr_1)<<" characters away from "<<*char_ptr_1<<endl;

    int values[] {1,2,3,4,5,6,7,8,9};
    int *int_ptr_1 {&values[0]};
    int *int_ptr_2 {&values[3]};

    cout<<"In the array "<<name<<", "<<*int_ptr_2<<" is "<<(int_ptr_2 - int_ptr_1)<<" values away from "<<*int_ptr_1<<endl;


    return 0;
}