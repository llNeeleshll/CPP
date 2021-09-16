#include <iostream>

using namespace std;

unsigned long long factorial(int number);

int main(){
    int factorial_number {8};
    auto factorial_value = factorial(factorial_number);
    cout<<"Factorial of "<<factorial_number<<" is : "<<factorial_value;
    return 0;
}

unsigned long long factorial(int number){
    if (number == 0){
        return 1;
    }
    return number * factorial(number -1);
}