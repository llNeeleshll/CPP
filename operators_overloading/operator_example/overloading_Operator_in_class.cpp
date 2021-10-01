#include<iostream>
#include<string>
#include<cstring>
#include "mystring.h"


using namespace std;

int main() {
    MyString a { "Hello"};
    MyString b;

    b = a;
    
    return 0;
}